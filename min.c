#include <stdio.h>

int main () {
    int arr[10] = {5, 3, 5, 6, 1, 8, -7, 0, -2, -3};
    int min = arr[0];
    int i = 0;

    for (i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d\n", min);
}
