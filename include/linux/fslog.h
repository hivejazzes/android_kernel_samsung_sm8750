/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2012 Samsung Electronics Co., Ltd.
 *             http://www.samsung.com/
 *
 */

/*
 * fslog internals
 */

#ifndef _LINUX_FSLOG_H
#define  _LINUX_FSLOG_H

int fslog_stlog(const char *fmt, ...);

/* deprecated function */
#define SE_LOG(fmt, ...)
#define fslog_selog(fmt, ...)
#define fslog_kmsg_selog(filter, lines)

#ifdef CONFIG_PROC_STLOG
#define ST_LOG(fmt, ...) fslog_stlog(fmt, ##__VA_ARGS__)
#else
#define ST_LOG(fmt, ...)
#endif /* CONFIG_PROC_STLOG */

#endif /* _FSLOG_H */
