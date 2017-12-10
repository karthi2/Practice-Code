#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[4][4] = {1, 1, 5, 1,
                     8, 3, 5, 3,
                     6, 3, 9, 6,
                     8, 7, 0, 2};

    int a, b, c, d;
    int i = 0;
    int j = 0;

    int diff;
    int max_diff = -32000;

    for (i = 3; i > 0; i--) {
        for (j = 3; j > 0; j--) {
            diff = arr[i][j] - arr[i-1][j-1];

            if (diff > max_diff) {
                max_diff = diff;
                c = i;
                d = j;
                a = i-1;
                b = j-1;
            }
        }
    }

    printf("(c, d) = %d %d, (a, b) = %d %d\nmax diff = %d\n", c, d, a, b, max_diff);
    return 0;
}
