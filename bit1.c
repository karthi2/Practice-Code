#include <stdio.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: bit1 <number>\n");
        exit(1);
    }

    int b = 10;
    int c = 20;
    int result = atoi(argv[1]) & b || c;
    printf("Result = %d\n", result);
    return 0;
}
