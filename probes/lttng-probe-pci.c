#include <linux/module.h>

#include "../lttng-tracer.h"

#include <trace/events/pci.h>

#define LTTNG_PACKAGE_BUILD

#define CREATE_TRACE_POINTS

#define TRACE_INCLUDE_PATH ../instrumentation/events/lttng-module

#include "../instrumentation/events/lttng-module/pci.h"


MODULE_LICENSE("GPL and additional rights");

MODULE_AUTHOR("Lakshmanan <lak@jaredhulbertenterprises.com>");

MODULE_DESCRIPTION("LTTng pci tracing probes");

MODULE_VERSION(__stringify(LTTNG_MODULES_MAJOR_VERSION) "."

    __stringify(LTTNG_MODULES_MINOR_VERSION) "."

    __stringify(LTTNG_MODULES_PATCHLEVEL_VERSION)

    LTTNG_MODULES_EXTRAVERSION);
