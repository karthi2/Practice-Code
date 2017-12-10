#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: ./complement <signed 32 bit integer>\n");
        exit(1);
    }

    int num = atoi(argv[1]);
    int res = 0;
    int i = 0;

    while (i != 32 && num > 0) {
        if (!(num & 1)) {
            res = res | (1 << i);
        }
        num = num >> 1;
        i++;
    }

    printf("%d\n", res);
    return 0;
}
