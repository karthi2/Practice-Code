#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f1 (void **x, int a, int b) {
    int res = memcmp(*x, &a, sizeof(a));
    printf("res = %d\n", res);

    res = memcmp(*x+sizeof(a), &b, sizeof(b));
    printf("res = %d\n", res);
}

void f2 (char ***p2) {
    int offset = 0;

    strncpy(**p2, "hello\n", 6);
    (*p2)++;
    strncpy(**p2, "how\n", 6);
    (*p2)++;
    strncpy(**p2, "are\n", 6);
    (*p2)++;
    strncpy(**p2, "you\n", 6);
    (*p2)++;
}

int main () {
    void *p = malloc (128 * sizeof(char));
    int a = 10;
    int b = 20;

    memcpy(p, &a, sizeof(a));
    memcpy(p+sizeof(a), &b, sizeof(b));

    f1(&p, a, b);


    char **p2 = NULL;
    int i = 0;
    p2 = (char **) malloc(sizeof(char **) * 4);
    for (i = 0; i < 4; i++) {
        p2[i] = malloc(sizeof(char) * 10);
    }

    char **p3 = p2;
    f2(&p2);

    for (i = 0; i < 4; i++) {
        printf("%s", p3[i]);
    }

    return 0;
}
