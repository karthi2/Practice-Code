/*
 * No of zeroes in the binary representation of a integer
 */
#include <stdio.h>

int main (int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: bit2 <integer>\n");
        exit(1);
    }

    int c = 0;
    int n = atoi(argv[1]);
    int a;

    while (n > 0) {
        a = !(n & 1);
        c = c + a;
        n = n >> 1;
    }

    printf("%d\n", c);
}
