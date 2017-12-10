#include <stdio.h>

int main () {
    int arr[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};

    int num_elems = sizeof(arr)/sizeof(arr[0]);
    int index_sorted = 1;
    int i = 0, j = 0;
    int temp = 0;

    while (index_sorted) {
        index_sorted = 0;
        for (i = 0; i < (num_elems - 1); i++) {
            if (arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                index_sorted = i+1;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < num_elems; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
