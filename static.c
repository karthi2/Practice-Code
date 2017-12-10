#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int x[5];

void foo () {
    memset(&x, 0, sizeof(x));
}

void foo1 () {
}

int main () {
    foo();
    foo1();
    return 0;
}
