/*
 * Routine to find equilibrium position in an array. It is a position such that the sum
 * of elements below it is equal to the sum of elements after it.
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[] = {1, 3, 5, 1, 1, 1, 1, 3};

    int i = 0;
    int j = sizeof(arr)/sizeof(int) - 1;

    int sum_i = 0;
    int sum_j = 0;

    while (i < j) {
        sum_i = sum_i + arr[i++];
        sum_j = sum_j + arr[j--];
    }

    if (sum_i == sum_j) {
        printf("%d\n", i);
        return 0;
    }

    if (sum_i > sum_j) {
        while (sum_i > sum_j) {
            sum_i = sum_i - arr[--i];
            sum_j = sum_j + arr[j--];
        }
    } else if (sum_i < sum_j) {
        while (sum_i < sum_j) {
            sum_i = sum_i + arr[i++];
            sum_j = sum_j - arr[j++];
        }
    }

    if (sum_i == sum_j) {
        printf("%d\n", i);
        return 0;
    }

    printf("%d\n", -1);
    return 0;
}
