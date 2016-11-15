#undef TRACE_SYSTEM
#define TRACE_SYSTEM driver

#if !defined(_LTTNG_DRIVER_H) || defined(TRACE_HEADER_MULTI_READ)
#define _LTTNG_DRIVER_H

#include "../../../probes/lttng-tracepoint-event.h"

#include <linux/tracepoint.h>

LTTNG_TRACEPOINT_EVENT(
    driver_trace,
    TP_PROTO(int ret, const char *string),
    TP_ARGS(ret, string),

    TP_FIELDS(
        ctf_integer(int, ret_field, ret)
        ctf_string(string_field, string)
    )
)

LTTNG_TRACEPOINT_EVENT(
    driver_tracePerf,
    TP_PROTO(int ret, const char *string, int cmdid, int queueid),
    TP_ARGS(ret, string, cmdid, queueid),
    TP_FIELDS(
        ctf_integer(int, ret_field, ret)
        ctf_string(string_field, string)
        ctf_integer(int, cmdid_field, cmdid)
        ctf_integer(int, queueid_field, queueid)
    )
)

#endif /* !defined(_LTTNG_DRIVER_H) || defined(TRACE_HEADER_MULTI_READ) */



/* other difference: do NOT include <trace/define_trace.h> */

#include "../../../probes/define_trace.h"
