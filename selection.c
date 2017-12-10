#include <stdio.h>

int main () {
    int arr[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};

    int i = 0;
    int j = 0;
    int num_elems = sizeof(arr)/sizeof(arr[0]);

    int min_pos = 0;
    int min = arr[0];

    for (i = 0; i < num_elems; i++) {
        min = arr[i];
        min_pos = i;
        for (j = i+1; j < num_elems; j++) {
            if (arr[j] < min) {
                min_pos = j;
                min = arr[j];
            }
        }

        if (i != min_pos) {
            arr[i] = arr[i] ^ arr[min_pos];
            arr[min_pos] = arr[i] ^ arr[min_pos];
            arr[i] = arr[i] ^ arr[min_pos];
        }
    }

    printf("Sorted array ");
    for (i =0 ; i < num_elems; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
