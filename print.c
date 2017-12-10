#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    int a = 10;
    int b = 5;
    int i = 0;

    printf("%d %s\n", a);

    printf("%d\n", a, b);

    printf("%c\n", **++argv);

    int **x;
    x = (int **) malloc (15 * sizeof(*x));
    for (i = 0; i < 10; i++) {
        x[i] = malloc (sizeof(x) * 10);
    }
    printf("%d %d\n", sizeof(x), sizeof(*x));

    return 0;
}
