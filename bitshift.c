#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>

int main () {
    unsigned long a = 0xffff;

    printf("0x%lx\n", (0xffffffffffff) | (a << 48));

    return 0;
}
