#undef TRACE_SYSTEM
#define TRACE_SYSTEM pci

#if !defined(_LTTNG_PCI_H) || defined(TRACE_HEADER_MULTI_READ)
#define _LTTNG_PCI_H

#include "../../../probes/lttng-tracepoint-event.h"

#include <linux/tracepoint.h>

LTTNG_TRACEPOINT_EVENT(
    pci_trace,
    TP_PROTO(int ret, const char *string),
    TP_ARGS(ret, string),

    TP_FIELDS(
        ctf_integer(int, ret_field, ret)
        ctf_string(string_field, string)
    )
)

#endif /* !defined(_LTTNG_PCI_H) || defined(TRACE_HEADER_MULTI_READ) */



/* other difference: do NOT include <trace/define_trace.h> */

#include "../../../probes/define_trace.h"
