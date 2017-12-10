#include <stdio.h>

int main () {
    int a = 2;
    switch (a) {
        case 1:
            printf("1\n");
            break;
        default:
            printf("None");
            break;
        case 2:
            printf("2\n");
            break;
    }

    return 0;
}
