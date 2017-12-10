#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main (int argc, char **argv) {
    int array[10] = {4, 5, 34, 33, 32, 11, 10, 31, 6, 9};

    qsort(array, 10, sizeof(int), cmpfunc);

    int i = 0;
    int n = sizeof(array)/ sizeof(int);
    int start_index = 0;
    int last_index = 0;
    int count = 1;

    int longest_count = 0;
    int longest_start_index = 0;
    int longest_last_index = 0;

    for (i = 1; i < n; i++) {
        if (array[i] == array[i-1] + 1) {
            count++;
            last_index = i;

            if (longest_count < count) {
                longest_count = count;
                longest_start_index = start_index;
                longest_last_index = last_index;
            }

        } else {
            start_index = i;
            last_index = i;
            count = 1;
        }
    }

    printf("No of consecutive numbers = %d\n", longest_count);

    for (i = longest_start_index; i <= longest_last_index; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
