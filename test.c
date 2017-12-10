#include <stdio.h>
#include "test.h"
#include <dlfcn.h>

void *dll_hdl = NULL;
typedef void (*fn)();
int a = 0;

int main () {
    dll_hdl = dlopen("libtest.so", RTLD_LAZY);

    fn c = NULL;
    
    c = (fn) dlsym(dll_hdl, "call_func");
    (*c)();

    test_init();

    printf("a = %d\n", a);

    return 0;
}
