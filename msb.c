/*
 * Finding the most significant bit position in an unsigned integer
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: ./msb <unsigned_int>\n");
        exit(1);
    }

    int n = atoi(argv[1]);
    int bit_pos = 0;

    while (n) {
        n = n >> 1;
        bit_pos++;
    }
    printf("bit position = %d\n", bit_pos);
    return 0;
}
