#include <stdio.h>

struct test {
    int a;
    int b;
    int c;
    char s[20];
};

int main () {
    struct test x[10] = {2};
    int i = 0;

    for (i = 0; i < 10; i++) {
        printf("%d %c\n", x[i].a, x[i].s[0]);
    }

    return 0;
}
