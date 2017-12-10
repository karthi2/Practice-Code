#include <stdio.h>

int main (int argc, char const **argv) {
    int i = 0;
    for (i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    printf("test %s\n", NULL);
    printf("test %s\n", NULL);
    printf("%s\n", NULL);
    printf("%s\n", NULL);
    return 0;
}
