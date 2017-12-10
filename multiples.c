/*
 * Get the multiples of 3 and 5 equal to or below a given number
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    int input = atoi(argv[1]);

    if (input < 3) {
        return 0;
    }

    int multiple3 = 0;
    int multiple5 = 0;
    int i = 0;
    int sum_m3 = 0, sum_m5 = 0;

    while (i < input) {
        multiple3++;
        sum_m3 += i;
        i += 3;
    }

    i = 0;
    while (i < input) {
        multiple5++;
        sum_m5 += i;
        i += 5;
    }

    printf("multiple3 = %d, multiple5= %d\n", multiple3, multiple5);
    printf("sum_m3 = %d, sum_m5 = %d, total = %d\n", sum_m3, sum_m5, sum_m3 + sum_m5);
    return 0;
}
