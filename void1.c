#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef void    fgid_bitmap;

fgid_bitmap f1 (fgid_bitmap *p) {
    return *p;
}

int main () {
    fgid_bitmap *p = malloc(128 * sizeof(char));

    int a = 10;
    int b = 20;

    memcpy(p, &a, sizeof(a));
    memcpy(p+sizeof(a), &b, sizeof(b));

    fgid_bitmap x = f1(p);
    fgid_bitmap y = f1(p+sizeof(a));

    printf("%d %d\n", (int)x, (int) y);
    return 0;
}
