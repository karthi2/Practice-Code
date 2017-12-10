#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    void *a = malloc(32 * sizeof(int8_t));

    int i = 0;
    for (i = 0; i < 32; i++) {
        memset(&a[i], i, 1);
    }

    int8_t *b = (int8_t *) a + 32 - (12 * sizeof(char));
    for (i = 0; i < 12; i++) {
        printf("0x%d ", *b);
        b++;
    }
    printf("\n");

    return 0;
}
