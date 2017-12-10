#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    int a[] = {2, 1, 3, 4, 7, 9, 24, 98};

    /*
     * Move all the even numbers to one end of the arr
     */
    int i = 0;
    int j = sizeof(a)/sizeof(int) - 1;
    int temp = 0;

    while (i < j) {
        while (a[j] % 2 == 0) {
            j--;
        }

        while (a[i] % 2) {
            i++;
        }

        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
        i++;
    }

    for (i = 0; i < sizeof(a)/sizeof(int); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    /*
     * For every even position from the left swap a number from the right end
     */
    i = 1;
    j = sizeof(a)/sizeof(int) - 2;

    while (i < j) {
       temp = a[i];
       a[i] = a[j];
       a[j] = temp;
       i = i + 2;
       j = j - 2;
    }

    for (i = 0; i < sizeof(a)/sizeof(int); i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
