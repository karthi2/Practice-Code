#include <stdio.h>

int main () {
    unsigned int i = 1;
    char *c = (char *)&i;

    if (*c) {
        printf("0x%x\n", &i);
        printf("0x%x \n", c);
        printf("Little Endian");
    } else {
        printf("Big Endian");
    }

    return 0;
}
