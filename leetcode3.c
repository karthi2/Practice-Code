/*
 * Majority element in an array - more than n/2 occurrences of an element within
 * the array.
 *
 * This solution only works if there is a guarantee that there a majority
 * element which matches the condition described above.
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 4, 4, 5, 4, 3, 4, 1, 1, 4, 2, 2, 4};
    int sum = 0;
    int n = 0;
    int i = 0;
    int size = sizeof(arr)/sizeof(int);

    for (i = 0; i < size; i++) {
        if (sum == 0) {
            n = arr[i];
            sum++;
        } else if (n == arr[i]) {
            sum++;
        } else {
            sum--;
        }
    }

    printf("%d\n", n);
    return 0;
}
