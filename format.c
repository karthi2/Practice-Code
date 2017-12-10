#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * format (uint64_t num) {
    uint64_t rem = 0;
    uint64_t i = 0, j = 0;
    char *res = (char *) calloc (1, 20 * sizeof(char));

    while (num) {
        rem = num % 10;
        num = num/10;

        res[i++] = rem + '0';
        j++;
        if (j % 3 == 0) {
            res[i++] = ',';
        }
    }

    return res;
}

int main () {
    uint64_t num = 3456435457;
    int i = 0;

    char *res = format(num);
    int len = strlen(res);

    if (res[len - 1] == ',') {
        len--;
    }

    for (i = len - 1; i >= 0; i--) {
        printf("%c", res[i]);
    }
    printf("\n");
    return 0;
}
