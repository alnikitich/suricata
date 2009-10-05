/** Copyright (c) 2009 Open Information Security Foundation.
 *  \author Anoop Saldanha <poonaatsoc@gmail.com>
 */

#ifndef __ERROR_H__
#define __ERROR_H__


/* different error types */
typedef enum {
    SC_OK,
    SC_ERR_MEM_ALLOC,
    SC_PCRE_MATCH_FAILED,
    SC_LOG_MODULE_NOT_INIT,
    SC_LOG_FG_FILTER_MATCH_FAILED,
    SC_COUNTER_EXCEEDED,
    SC_INVALID_CHECKSUM,
    SC_SPRINTF_ERROR,
    SC_INVALID_ARGUMENT,
    SC_SPINLOCK_ERROR,
    SC_INVALID_ENUM_MAP,
    SC_INVALID_IP_NETBLOCK,
    SC_INVALID_IPV4_ADDR,
    SC_INVALID_IPV6_ADDR,
    SC_ERR_INVALID_SIGNATURE,
    SC_ERR_OPENING_FILE,
    SC_ERR_FOPEN,
    SC_INITIALIZATION_ERROR,
    SC_THREAD_SPAWN_FAILED,
    SC_ERR_SYSCALL,
    SC_INVALID_ARGUMENTS,
    SC_ERR_THREAD_CREATE_ERROR,
    SC_ERR_PERF_STATS_NOT_INIT,
} SCError;

const char *SCErrorToString(SCError);


#endif /* __ERROR_H__ */
