#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    int a = atoi(argv[1]);

    a ? printf("Yes\n"): 5;

    printf("%d\n", a);

    char *s = NULL;

    a = s ? 10:15;
    printf("%d\n", a);

    return 0;
}
