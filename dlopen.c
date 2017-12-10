#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main () {
    char    *dll = "/Users/kartram2/Documents/testcases/libfgid_mgr_common.so";

    void    *dll_hdl = dlopen(dll, RTLD_NOW);
    if (dll_hdl == NULL) {
        char *rc = dlerror();
        printf("Failed to load the lib: %s\n", rc);
    }

    return 0;
}
