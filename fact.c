#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main (int argc, char **argv) {
    int a = atoi(argv[1]);

    int i = 0;
    uint64_t fact = 1;

    for (i = a; i > 0; i--) {
        fact = fact * i;
    }

    printf("%"PRIu64"\n", fact);
    return 0;
}
