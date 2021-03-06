/* -*- mode: c -*- */

/* Copyright (C) 2016 Alexander Chernov <cher@ejudge.ru> */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "mongo_conn.h"

#include "ejudge/xalloc.h"
#include "ejudge/errlog.h"
#include "ejudge/osdeps.h"

#include <mongo.h>

#include <stdio.h>

#define MONGO_RETRY_TIMEOUT 60

struct mongo_conn *
mongo_conn_create(void)
{
    struct mongo_conn *conn = NULL;
    XCALLOC(conn, 1);
    return conn;
}

struct mongo_conn *
mongo_conn_free(struct mongo_conn *conn)
{
    if (conn) {
        xfree(conn->database);
        xfree(conn->host);
        xfree(conn->table_prefix);
        xfree(conn->user);
        xfree(conn->password);
        if (conn->conn) {
            mongo_sync_disconnect(conn->conn);
        }
        memset(conn, 0xff, sizeof(*conn));
        xfree(conn);
    }
    return NULL;
}

int
mongo_conn_open(struct mongo_conn *state)
{
    if (state->conn) return 1;

    time_t current_time = time(NULL);
    if (state->last_check_time > 0 && state->last_check_time + MONGO_RETRY_TIMEOUT > current_time) {
        return 0;
    }

    if (!state->database) {
        if (!state->database) state->database = xstrdup("ejudge");
        if (!state->host) state->host = xstrdup("localhost");
        if (!state->table_prefix) state->table_prefix = xstrdup("");
        if (state->port <= 0) state->port = 27017;
        state->show_queries = 1;
    }
    state->last_check_time = current_time;

    state->conn = mongo_sync_connect(state->host, state->port, 0);
    if (!state->conn) {
        err("cannot connect to mongodb: %s", os_ErrorMsg());
        return 0;
    }
    mongo_sync_conn_set_safe_mode(state->conn, 1);
    mongo_sync_conn_set_auto_reconnect(state->conn, 1);
    if (state->user && state->password) {
        if (!mongo_sync_cmd_authenticate(state->conn, state->database, state->user, state->password)) {
            err("mongodb authentification failed: %s", os_ErrorMsg());
            mongo_sync_disconnect(state->conn);
            state->conn = NULL;
            return 0;
        }
    }
    return 1;
}

const unsigned char *
mongo_conn_ns(struct mongo_conn *conn, const unsigned char *collection_name)
{
    snprintf(conn->ns, sizeof(conn->ns), "%s.%s%s", conn->database, conn->table_prefix, collection_name);
    return conn->ns;
}

/*
 * Local variables:
 *  c-basic-offset: 4
 * End:
 */
