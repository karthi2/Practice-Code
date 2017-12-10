#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *a = "aaaa";
char *b = "bbbb";
char *c = "cccc";
char *d = "dddd";

void dump (char ***str) {
    char **s = str[0];
    sprintf(*s, "%s%s", a, a);
    s++;
    sprintf(*s, "%s%s", b, b);
    s++;
    sprintf(*s, "cccccc");
    s++;
    sprintf(*s, "dddddd");
    s++;
}

int main () {
    char **str = NULL;
    int i = 0;

    str = malloc(4 * sizeof(char **));
    for (i = 0; i < 4; i++) {
        str[i] = malloc(50 * sizeof(char));
    }

    dump(&str);

    for (i = 0; i < 4; i++) {
        printf("%s\n", str[i]);
    }
}
