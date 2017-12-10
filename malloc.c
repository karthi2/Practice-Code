#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int **a = NULL;

    int row = 200;
    int cols = 2;

    a = (int **) malloc (sizeof(int *) * row);
    a[0] = (int *) malloc (sizeof(int) * (cols * row));
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++) {
        a[i] = *a + cols * i;
        memset(a[i], 0, sizeof(int) * cols);
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
            a[i][j] = i + j;
        }
        printf("\n");
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < cols; j++) {
            printf("%p ", &a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
