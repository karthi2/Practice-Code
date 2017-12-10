#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int m = atoi(argv[3]);
    int n = atoi(argv[4]);

    int i = 0;

    for (i = 0; i < (n - m + 1); i++) {
        int bit = (a >> (m + i)) & 1;
        if (bit == 1) {
            b = b | (1 << (m + i));
        } else {
            b = b ^ (1 << (m + i));
        }
    }

    printf("%d\n", b);
    return 0;
}
