#include <stdio.h>

int main () {
    int a = 17;
    int b = 7;

    int index = 0;
    while (b) {
        if (b & 1) {
            a = a + (a << index);
        }
        b = b >> 1;
        index++;
    }

    printf("%d Index = %d\n", a, index);
    return 0;
}
