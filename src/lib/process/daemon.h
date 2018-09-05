/* Copyright (c) 2003-2004, Roger Dingledine
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson.
 * Copyright (c) 2007-2018, The Tor Project, Inc. */
/* See LICENSE for licensing information */

/**
 * \file daemon.h
 * \brief Header for daemon.c
 **/

#ifndef TOR_DAEMON_H
#define TOR_DAEMON_H

int start_daemon(void);
int finish_daemon(const char *desired_cwd);

#endif
