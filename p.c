#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    __int8_t  a = 10;
    __int8_t *b = &a;

    printf("a = %lld \n", (__int64_t) *b);

    int *c = NULL;
    int d = 0;

    printf("c is null: %d\n", d ? (*c):1);

    int **m = NULL;
    m = malloc(sizeof(int *) * 50);

    int i = 0;
    int j = 0;
    for (i = 0; i < 50; i++) {
        m[i] = malloc(sizeof(int) * 2);
        memset(m[i], 0, sizeof(int) * 2);
    }

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 2; j++) {
            m[i][j] = i+j;
        }
    }

    return 0;
}
