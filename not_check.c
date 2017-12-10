#include <stdio.h>

int main () {
    int a = 0xffffffff;

    if (!a) {
        printf("%d\n", a);
    }

    return 0;
}
