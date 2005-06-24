/* -*- c -*- */
/* $Id$ */

#ifndef __SUPER_PROTO_H__
#define __SUPER_PROTO_H__

/* Copyright (C) 2004-2005 Alexander Chernov <cher@ispras.ru> */

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

#define PROT_SUPER_PACKET_MAGIC (0xf249)
struct prot_super_packet
{
  unsigned short magic;
  short id;
};

/* client-server requests */
enum
{
  SSERV_CMD_PASS_FD = 1,
  SSERV_CMD_MAIN_PAGE,
  SSERV_CMD_CONTEST_PAGE,
  SSERV_CMD_VIEW_SERVE_LOG,
  SSERV_CMD_VIEW_RUN_LOG,
  SSERV_CMD_VIEW_CONTEST_XML,
  SSERV_CMD_VIEW_SERVE_CFG,
  SSERV_CMD_OPEN_CONTEST,
  SSERV_CMD_CLOSE_CONTEST,
  SSERV_CMD_INVISIBLE_CONTEST,
  SSERV_CMD_VISIBLE_CONTEST,
  SSERV_CMD_SHOW_HIDDEN,
  SSERV_CMD_HIDE_HIDDEN,
  SSERV_CMD_SHOW_CLOSED,
  SSERV_CMD_HIDE_CLOSED,
  SSERV_CMD_SHOW_UNMNG,
  SSERV_CMD_HIDE_UNMNG,
  SSERV_CMD_CREATE_CONTEST,
  SSERV_CMD_CREATE_CONTEST_2,
  SSERV_CMD_EDIT_CURRENT_CONTEST,
  SSERV_CMD_CNTS_BASIC_VIEW,
  SSERV_CMD_CNTS_ADVANCED_VIEW,
  SSERV_CMD_CNTS_SHOW_HTML_HEADERS,
  SSERV_CMD_CNTS_HIDE_HTML_HEADERS,
  SSERV_CMD_CNTS_SHOW_HTML_ATTRS,
  SSERV_CMD_CNTS_HIDE_HTML_ATTRS,
  SSERV_CMD_CNTS_FORGET,
  SSERV_CMD_CNTS_SHOW_PATHS,
  SSERV_CMD_CNTS_HIDE_PATHS,
  SSERV_CMD_CNTS_SHOW_ACCESS_RULES,
  SSERV_CMD_CNTS_HIDE_ACCESS_RULES,
  SSERV_CMD_EDIT_REGISTER_ACCESS,
  SSERV_CMD_EDIT_USERS_ACCESS,
  SSERV_CMD_EDIT_MASTER_ACCESS,
  SSERV_CMD_EDIT_JUDGE_ACCESS,
  SSERV_CMD_EDIT_TEAM_ACCESS,
  SSERV_CMD_EDIT_SERVE_CONTROL_ACCESS,
  SSERV_CMD_CNTS_SHOW_PERMISSIONS,
  SSERV_CMD_CNTS_HIDE_PERMISSIONS,
  SSERV_CMD_EDIT_CONTEST_XML,
  SSERV_CMD_CNTS_EDIT_PERMISSION,
  SSERV_CMD_CNTS_SHOW_FORM_FIELDS,
  SSERV_CMD_CNTS_HIDE_FORM_FIELDS,
  SSERV_CMD_CNTS_EDIT_FORM_FIELDS,
  SSERV_CMD_CNTS_EDIT_CONTESTANT_FIELDS,
  SSERV_CMD_CNTS_EDIT_RESERVE_FIELDS,
  SSERV_CMD_CNTS_EDIT_COACH_FIELDS,
  SSERV_CMD_CNTS_EDIT_ADVISOR_FIELDS,
  SSERV_CMD_CNTS_EDIT_GUEST_FIELDS,
  SSERV_CMD_CNTS_EDIT_USERS_HEADER,
  SSERV_CMD_CNTS_EDIT_USERS_FOOTER,
  SSERV_CMD_CNTS_EDIT_REGISTER_HEADER,
  SSERV_CMD_CNTS_EDIT_REGISTER_FOOTER,
  SSERV_CMD_CNTS_EDIT_TEAM_HEADER,
  SSERV_CMD_CNTS_EDIT_TEAM_FOOTER,
  SSERV_CMD_CNTS_EDIT_REGISTER_EMAIL_FILE,

  SSERV_CMD_CNTS_CLEAR_NAME,
  SSERV_CMD_CNTS_CLEAR_NAME_EN,
  SSERV_CMD_CNTS_CLEAR_DEADLINE,
  SSERV_CMD_CNTS_CLEAR_USERS_HEADER,
  SSERV_CMD_CNTS_CLEAR_USERS_FOOTER,
  SSERV_CMD_CNTS_CLEAR_REGISTER_HEADER,
  SSERV_CMD_CNTS_CLEAR_REGISTER_FOOTER,
  SSERV_CMD_CNTS_CLEAR_TEAM_HEADER,
  SSERV_CMD_CNTS_CLEAR_TEAM_FOOTER,
  SSERV_CMD_CNTS_CLEAR_USERS_HEAD_STYLE,
  SSERV_CMD_CNTS_CLEAR_USERS_PAR_STYLE,
  SSERV_CMD_CNTS_CLEAR_USERS_TABLE_STYLE,
  SSERV_CMD_CNTS_CLEAR_USERS_VERB_STYLE,
  SSERV_CMD_CNTS_CLEAR_REGISTER_HEAD_STYLE,
  SSERV_CMD_CNTS_CLEAR_REGISTER_PAR_STYLE,
  SSERV_CMD_CNTS_CLEAR_REGISTER_TABLE_STYLE,
  SSERV_CMD_CNTS_CLEAR_TEAM_HEAD_STYLE,
  SSERV_CMD_CNTS_CLEAR_TEAM_PAR_STYLE,
  SSERV_CMD_CNTS_CLEAR_REGISTER_EMAIL,
  SSERV_CMD_CNTS_CLEAR_REGISTER_URL,
  SSERV_CMD_CNTS_CLEAR_REGISTER_EMAIL_FILE,
  SSERV_CMD_CNTS_CLEAR_TEAM_URL,
  SSERV_CMD_CNTS_CLEAR_STANDINGS_URL,
  SSERV_CMD_CNTS_CLEAR_PROBLEMS_URL,
  SSERV_CMD_CNTS_CLEAR_ROOT_DIR,
  SSERV_CMD_CNTS_CLEAR_CONF_DIR,

  SSERV_CMD_CNTS_CHANGE_NAME,
  SSERV_CMD_CNTS_CHANGE_NAME_EN,
  SSERV_CMD_CNTS_CHANGE_AUTOREGISTER,
  SSERV_CMD_CNTS_CHANGE_TEAM_PASSWD,
  SSERV_CMD_CNTS_CHANGE_MANAGED,
  SSERV_CMD_CNTS_CHANGE_RUN_MANAGED,
  SSERV_CMD_CNTS_CHANGE_CLEAN_USERS,
  SSERV_CMD_CNTS_CHANGE_CLOSED,
  SSERV_CMD_CNTS_CHANGE_INVISIBLE,
  SSERV_CMD_CNTS_CHANGE_TIME_SKEW,
  SSERV_CMD_CNTS_CHANGE_TEAM_LOGIN,
  SSERV_CMD_CNTS_CHANGE_DEADLINE,
  SSERV_CMD_CNTS_CHANGE_USERS_HEADER,
  SSERV_CMD_CNTS_CHANGE_USERS_FOOTER,
  SSERV_CMD_CNTS_CHANGE_REGISTER_HEADER,
  SSERV_CMD_CNTS_CHANGE_REGISTER_FOOTER,
  SSERV_CMD_CNTS_CHANGE_TEAM_HEADER,
  SSERV_CMD_CNTS_CHANGE_TEAM_FOOTER,
  SSERV_CMD_CNTS_CHANGE_USERS_HEAD_STYLE,
  SSERV_CMD_CNTS_CHANGE_USERS_PAR_STYLE,
  SSERV_CMD_CNTS_CHANGE_USERS_TABLE_STYLE,
  SSERV_CMD_CNTS_CHANGE_USERS_VERB_STYLE,
  SSERV_CMD_CNTS_CHANGE_REGISTER_HEAD_STYLE,
  SSERV_CMD_CNTS_CHANGE_REGISTER_PAR_STYLE,
  SSERV_CMD_CNTS_CHANGE_REGISTER_TABLE_STYLE,
  SSERV_CMD_CNTS_CHANGE_TEAM_HEAD_STYLE,
  SSERV_CMD_CNTS_CHANGE_TEAM_PAR_STYLE,
  SSERV_CMD_CNTS_CHANGE_REGISTER_EMAIL,
  SSERV_CMD_CNTS_CHANGE_REGISTER_URL,
  SSERV_CMD_CNTS_CHANGE_REGISTER_EMAIL_FILE,
  SSERV_CMD_CNTS_CHANGE_TEAM_URL,
  SSERV_CMD_CNTS_CHANGE_STANDINGS_URL,
  SSERV_CMD_CNTS_CHANGE_PROBLEMS_URL,
  SSERV_CMD_CNTS_CHANGE_ROOT_DIR,
  SSERV_CMD_CNTS_CHANGE_CONF_DIR,
  SSERV_CMD_CNTS_DEFAULT_ACCESS,
  SSERV_CMD_CNTS_ADD_RULE,
  SSERV_CMD_CNTS_CHANGE_RULE,
  SSERV_CMD_CNTS_DELETE_RULE,
  SSERV_CMD_CNTS_UP_RULE,
  SSERV_CMD_CNTS_DOWN_RULE,
  SSERV_CMD_CNTS_DELETE_PERMISSION,
  SSERV_CMD_CNTS_ADD_PERMISSION,
  SSERV_CMD_CNTS_SAVE_PERMISSIONS,
  SSERV_CMD_CNTS_SAVE_FORM_FIELDS,
  SSERV_CMD_CNTS_SAVE_CONTESTANT_FIELDS, /* NOTE: the following 5 commands must */
  SSERV_CMD_CNTS_SAVE_RESERVE_FIELDS,    /* be sequental */
  SSERV_CMD_CNTS_SAVE_COACH_FIELDS,
  SSERV_CMD_CNTS_SAVE_ADVISOR_FIELDS,
  SSERV_CMD_CNTS_SAVE_GUEST_FIELDS,
  SSERV_CMD_CNTS_SAVE_USERS_HEADER,
  SSERV_CMD_CNTS_SAVE_USERS_FOOTER,
  SSERV_CMD_CNTS_SAVE_REGISTER_HEADER,
  SSERV_CMD_CNTS_SAVE_REGISTER_FOOTER,
  SSERV_CMD_CNTS_SAVE_TEAM_HEADER,
  SSERV_CMD_CNTS_SAVE_TEAM_FOOTER,
  SSERV_CMD_CNTS_SAVE_REGISTER_EMAIL_FILE,
  SSERV_CMD_CNTS_CLEAR_USERS_HEADER_TEXT,
  SSERV_CMD_CNTS_CLEAR_USERS_FOOTER_TEXT,
  SSERV_CMD_CNTS_CLEAR_REGISTER_HEADER_TEXT,
  SSERV_CMD_CNTS_CLEAR_REGISTER_FOOTER_TEXT,
  SSERV_CMD_CNTS_CLEAR_TEAM_HEADER_TEXT,
  SSERV_CMD_CNTS_CLEAR_TEAM_FOOTER_TEXT,
  SSERV_CMD_CNTS_CLEAR_REGISTER_EMAIL_FILE_TEXT,
  SSERV_CMD_CNTS_COMMIT,

  SSERV_CMD_LAST,
};

/* replies */
enum
{
  SSERV_RPL_OK = 0,

  SSERV_RPL_LAST,
};

/* error codes */
enum
{
  SSERV_ERR_NO_ERROR = 0,
  SSERV_ERR_1,                  /* to reserve -1 */
  SSERV_ERR_NOT_CONNECTED,
  SSERV_ERR_INVALID_FD,
  SSERV_ERR_WRITE_TO_SERVER,
  SSERV_ERR_BAD_SOCKET_NAME,
  SSERV_ERR_SYSTEM_ERROR,
  SSERV_ERR_CONNECT_FAILED,
  SSERV_ERR_READ_FROM_SERVER,
  SSERV_ERR_EOF_FROM_SERVER,
  SSERV_ERR_PROTOCOL_ERROR,
  SSERV_ERR_USERLIST_DOWN,
  SSERV_ERR_PERMISSION_DENIED,
  SSERV_ERR_INVALID_CONTEST,
  SSERV_ERR_BANNED_IP,
  SSERV_ERR_ROOT_DIR_NOT_SET,
  SSERV_ERR_FILE_NOT_EXIST,
  SSERV_ERR_LOG_IS_DEV_NULL,
  SSERV_ERR_FILE_READ_ERROR,
  SSERV_ERR_FILE_FORMAT_INVALID,
  SSERV_ERR_UNEXPECTED_USERLIST_ERROR,
  SSERV_ERR_CONTEST_ALREADY_USED,
  SSERV_ERR_CONTEST_EDITED,
  SSERV_ERR_NOT_IMPLEMENTED,
  SSERV_ERR_INVALID_PARAMETER,
  SSERV_ERR_CONTEST_NOT_EDITED,
  SSERV_ERR_DUPLICATED_LOGIN,

  SSERV_UNKNOWN_ERROR,
  SSERV_ERR_LAST,
};

unsigned char const *super_proto_strerror(int n);

enum
{
  SSERV_VIEW_INVISIBLE = 1,
};

struct prot_super_pkt_main_page
{
  struct prot_super_packet b;

  int locale_id;
  int contest_id;               /* for viewing contest details */
  unsigned int flags;           /* view flags */
  int self_url_len;
  int hidden_vars_len;
  int extra_args_len;
  unsigned char data[3];
};

struct prot_super_pkt_simple_cmd
{
  struct prot_super_packet b;

  int contest_id;
};

struct prot_super_pkt_create_contest
{
  struct prot_super_packet b;

  int num_mode;
  int templ_mode;
  int contest_id;
  int templ_id;
  int self_url_len;
  int hidden_vars_len;
  int extra_args_len;
  unsigned char data[3];
};

struct prot_super_pkt_set_param
{
  struct prot_super_packet b;

  int param1;
  int param2_len;
  int param3;
  int param4;
  unsigned char data[1];
};

#endif /* __SUPER_PROTO_H__ */
