#include <stdio.h>
#include "test.h"

extern int a;

void call_func() {
    printf("%s\n", __FUNCTION__);
    a = 10;
}

int call_func2() {
    printf("%s\n", __FUNCTION__);
    return 1;
}
