#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct A_ {
    int *m[2];
} A;

A a;

int main () {
    int i = 0;

    for (i = 0; i < 2; i++) {
        if (a.m[i] == NULL) {
            a.m[i] = malloc (sizeof(int) * 5);
        }
    }

    int j = 5;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++) {
            a.m[i][j] = i + j;
        }
    }

    return 0;
}
