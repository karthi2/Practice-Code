/*
 * Routine to check if all the rows in the matrix are a rotation permutation of
 * one another
 */

#include <stdio.h>

int main () {
    int n = 5;
    int a[5][5] = {{1, 2, 3, 4, 5},
                   {5, 1, 2, 3, 4},
                   {4, 5, 1, 2, 3},
                   {3, 4, 5, 1, 2},
                   {2, 3, 5, 4, 1}};

    int i = 0;
    int j = 0;
    int rotation = 1;

    for (i = 0; i < (n - 1); i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[i+1][(j+1)%n]) {
                rotation = 0;
                break;
            }
        }

        if (!rotation) {
            break;
        }
    }

    printf("%s\n", rotation ? "Rotation" : "Not a rotation");
    return 0;
}
