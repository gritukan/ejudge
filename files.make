# -*- Makefile -*-
# $Id$

# Copyright (C) 2002 Alexander Chernov <cher@ispras.ru> */

# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.

# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA

CFILES=\
 base64.c\
 cgi.c\
 clar.c\
 clarlog.c\
 clntutil.c\
 compile.c\
 contests.c\
 cr_serialize.c\
 edit-userlist.c\
 expat_iface.c\
 html.c\
 idmap.c\
 inetdb.c\
 localdb.c\
 make-teamdb-inet.c\
 make-teamdb.c\
 master.c\
 misctext.c\
 mkpasswd.c\
 parsecfg.c\
 pathutl.c\
 prepare.c\
 protocol.c\
 register.c\
 run.c\
 runlog.c\
 send-passwords.c\
 serve.c\
 sformat.c\
 sha.c\
 submit.c\
 team.c\
 teamdb.c\
 userlist.c\
 userlist-server.c\
 userlist_cfg.c\
 userlist_clnt.c\
 userlist_proto.c\
 userlist_xml.c\
 users.c\
 unix/fileutl.c\
 win32/fileutl.c\
 charsets/koi8_to_enc.c\
 charsets/koi8_to_enc_heap.c\
 charsets/koi8_to_enc_unchecked.c\
 charsets/nls.c\
 charsets/nls_cp1251.c\
 charsets/nls_cp866.c\
 charsets/nls_iso8859-5.c\
 charsets/nls_koi8-r.c\
 charsets/nls_utf8.c\
 charsets/utf8_to_enc.c\
 charsets/utf8_to_enc_heap.c\
 charsets/utf8_to_enc_unchecked.c\
 charsets/utf8_to_koi8.c\
 charsets/utf8_to_koi8_heap.c\
 charsets/utf8_to_koi8_unchecked.c\
 serve_clnt/do_pass_fd.c\
 serve_clnt/get_archive.c\
 serve_clnt/list_runs.c\
 serve_clnt/open.c\
 serve_clnt/pass_fd.c\
 serve_clnt/recv_packet.c\
 serve_clnt/send_packet.c\
 serve_clnt/show_item.c\
 serve_clnt/submit_clar.c\
 serve_clnt/submit_run.c\
 serve_clnt/team_page.c

HFILES=\
 base64.h\
 cgi.h\
 clarlog.h\
 clntutil.h\
 contests.h\
 cr_serialize.h\
 expat_iface.h\
 fileutl.h\
 html.h\
 idmap.h\
 inetdb.h\
 localdb.h\
 misctext.h\
 nls.h\
 parsecfg.h\
 pathutl.h\
 prepare.h\
 protocol.h\
 runlog.h\
 serve_clnt.h\
 sformat.h\
 sha.h\
 teamdb.h\
 userlist.h\
 userlist_cfg.h\
 userlist_clnt.h\
 version.h\
 unix/unix_fileutl.h
