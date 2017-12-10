#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    int i = 0;
    int j = 0;

    int **a = NULL;

    a = calloc(3, sizeof(int *));
    for (i = 0; i < 3; i++) {
        a[i] = calloc(3, sizeof(int));
    }

    int n = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            a[i][j] = n++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
