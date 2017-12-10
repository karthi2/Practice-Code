#include <stdio.h>

int main (int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: ./ascii <character>\n");
        return 1;
    }

    printf("ASCII value of %c: %d\n", *argv[1], *argv[1]);
    return 0;
}
