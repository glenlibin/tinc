/*
    dropin.h -- header file for dropin.c
    Copyright (C) 2000,2001 Ivo Timmermans <ivo@o2w.nl>,
                  2000,2001 Guus Sliepen <guus@sliepen.eu.org>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

    $Id: dropin.h,v 1.1.2.9 2002/09/09 21:49:16 guus Exp $
*/

#ifndef __DROPIN_H__
#define __DROPIN_H__

#ifndef HAVE_DAEMON
extern int daemon(int, int);
#endif

#ifndef HAVE_GET_CURRENT_DIR_NAME
extern char *get_current_dir_name(void);
#endif

#ifndef HAVE_ASPRINTF
extern int asprintf(char **, const char *, ...);
#endif

#ifndef HAVE_GETNAMEINFO
#include <sys/types.h>
#include <sys/socket.h>
extern int getnameinfo(const struct sockaddr *sa, size_t salen, char *host,
					   size_t hostlen, char *serv, size_t servlen, int flags);
#endif

#endif							/* __DROPIN_H__ */
