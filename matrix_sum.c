/*
 * Routine to print the sum of all the entries in a square matrix where each
 * entry is the absolute difference of its row and column number
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    int i = 0;
    int sum = 0;

    int n = atoi(argv[1]);
    for (i = 1; i < n; i++) {
        sum = sum + ((n-i) * (n - i + 1)/2);
    }

    printf("sum = %d\n", sum * 2);

    printf("%c\n", **++argv);
    return 0;
}

