#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./reverse_num <num>\n");
        exit(1);
    }

    int n = atoi(argv[1]);
    int res = 0;

     while (n) {
        res = res * 10 + n % 10;
        n = n/10;
    }

    printf("%d\n", res);
    return 0;
}
