#include <stdio.h>

int main () {
    printf("%d\n", -1 << 4);

    int x = 1;
    int y = 2;

    x = (x++) + (++y);
    y = (++x) + (++y);

    printf("%d %d\n", x, y);
    return 0;
}
