#include <stdio.h>

void rotate (unsigned char c, int m) {
    unsigned char y = c;
    printf("%d\n", y >> m | y << (8-m));

    while (m != 0) {
        unsigned char x = c & 1;
        c = c >> 1;
        x = x << (sizeof(c) - 1);
        printf("%d\n", x);
        c = c | x;
        m--;
    }

    //printf("%d\n", c);
}

int main () {
    unsigned char c = 10;
    int m = 5;

    rotate(c, m);
}
