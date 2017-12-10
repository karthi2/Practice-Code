#include <stdio.h>

unsigned mystery (unsigned x) {
    unsigned i = 0;
    while (x) {
        x = x & (x-1);
        i++;
    }
    return i;
}

int main () {
    unsigned n = 10;
    unsigned x = mystery(10);

    printf("%d\n", x);
}
