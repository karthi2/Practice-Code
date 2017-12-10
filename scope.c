#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if ((atoi(argv[1]) == 1)) {
        int a = 10;
    } else {
        int a = 20;
    }

    //printf("%d\n", a);

    struct A {
        int a;
    };

    struct A x;
    x.a = 10;

    void *y = &x;

    printf("%d\n", ((struct A *) y)->a);

    return 0;
}
