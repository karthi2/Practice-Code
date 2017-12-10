#include <stdio.h>
#include <string.h>

int main () {
    char *s = "hello";
    int i = 0;

    for (i = 0; i < strlen(s); i++) {
        printf("%d ", s[i] - 'a');
    }
    printf("\n");

    return 0;
}
