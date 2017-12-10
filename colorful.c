#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0;
    int j = 0;
    int num = 0;
    int a[] = {3, 2, 4, 5};
    int len = sizeof(a)/sizeof(a[0]);
    int N = 3245;

    for (i = 0; i < len; i++) {
        num = a[i];
        printf("%d ", num);
        for (j = i+1; j < len; j++) {
            num = num * 10 + a[j];
            if (num != N) {
                printf("%d ", num);
            }
        }
        printf("\n");
    }
    return 0;
}
