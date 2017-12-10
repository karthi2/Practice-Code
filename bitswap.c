#include <stdio.h>

int main () {
    unsigned int a = 95301;
    unsigned int b = 0;
    int bit = 0;

    int i = 0;
    int j = sizeof(unsigned int) * 8 - 1;
    for (i = 0; i < sizeof(unsigned int) * 8; i++) {
        bit = a & 1;
        b = b | (bit << j);
        j--;
        a = a >> 1;
    }

    printf("%u\n", b);

    return 0;
}
