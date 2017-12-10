#include <stdio.h>
#include <stdlib.h>

int func (int a) {
    return a;
}

int main () {
    int a = 3;

    switch (a) {
        case 1:
            a = 2;
            if (a == 2) {
                break;
            }
            printf("Hello world a = %d\n", a);
            return a;

        default:
            return 0;
    }

    a = func(a);
    printf("%d\n", a);
}
