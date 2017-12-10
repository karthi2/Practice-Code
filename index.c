#include <stdio.h>
#include <string.h>

int main () {
    int a[64];
    int i = 0;

    memset(a, 0, 64 * sizeof(int));

    for (i = 0; i < 32; i++) {
        a[i] = i;
    }

    int *b = &a[32];

    for (i = 0; i < 32; i++) {
        b[i] = i;
    }

    for (i = 0; i < 64; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
