#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char *bigger = "abc";
    char *little = "a";
    char c = 'a';
    char *p = calloc(2, 1);
    strncpy(p, &c, sizeof(char));

    char *res = strstr(bigger, p);
    printf("%s", res);
    return 0;
}
