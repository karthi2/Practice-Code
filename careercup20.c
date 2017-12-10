#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIGITS 5

void find_digits(int sum, int *digits, int *index) {
    int rem = 0;
    int i = 0;
    int j = 0;
    
    int *arr = malloc(sizeof(int) * 5);

    while (sum != 0) {
        rem = sum % 10;
        sum = sum / 10;
        if (i == MAX_DIGITS) {
            printf("Number exceeded max digits of 5\n");
            exit(1);
        }
        arr[i] = rem;
        i++;
    }

    for (j = i-1; j >= 0; j--) {
        digits[*index] = arr[j];
        (*index)++;
    }
}

int main () {
    int a[] = {1, 2, 3, 4, 5, 6, 12, 99};
    int b[] = {2, 3, 4, 5, 6, 7, 8, 38, 113};

    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);

    int diff = abs(size_a - size_b);
    int size_c = (sizeof(int) * ((size_a > size_b) ? size_a:size_b) * 2) + (diff
            * sizeof(int));

    int *c = malloc(size_c);
    memset(c, 0, size_c);

    int i = 0;
    int index = 0;

    int min = size_a > size_b ? size_b:size_a;

    for (i = 0; i < min; ) {
        int sum = a[i] + b[i];
        if (sum > 9) {
            find_digits(sum, c, &index);
        } else {
            c[i] = sum;
            index++;
        }
        i++;
    }

    if (size_a > size_b) {
        for ( ; i < size_a; i++) {
            c[i] = a[i];
        }
    } else {
        for ( ; i < size_b; i++) {
            c[index] = b[i];
            index++;
        }
    }

    for (i = 0; i < index; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}
