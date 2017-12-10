#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int arr[] = {13, 19, 16, 17, 5, 4, 6, 2};
    int leader[8];
    int count = 0;
    int size = sizeof(arr)/sizeof(int);

    memcpy(leader, arr, sizeof(arr));

    int i = 0;
    for (i = 0; i < size - 1; i++) {
        if (arr[i] < arr[i+1]) {
            int j = 0;
            for (j = 0; j < i+1; j++) {
                if (leader[j] < leader[i+1]) {
                    leader[j] = 0;
                }
                count++;
            }
        }
    }

    for (i = 0; i < size; i++) {
        if (leader[i] != 0) {
            printf("%d ", leader[i]);
        }
    }

    printf("\n");
    printf("count = %d\n", count);

    return 0;
}
