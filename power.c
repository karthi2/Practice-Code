#include <stdio.h>

int main () {
    int a = 5;
    int b = 10;
    int i = 0;
    int res = a;

    for (i = 1; i < b; i++) {
        res = res * a;
    }

    printf("%d\n", res);

    res = 1;
    while (b) {
        if (b & 1) {
            res *= a;
        }       
        a = a * a;
        b /= 2;
    }

    printf("%d\n", res);
    return 0;
}
