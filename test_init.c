#include <stdio.h>
#include "test.h"
#include <dlfcn.h>

extern void *dll_hdl;
typedef int (*fn1)();

void test_init() {
    fn1 func = (fn1) dlsym(dll_hdl, "call_func2");
    (*func)();
}
