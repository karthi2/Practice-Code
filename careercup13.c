#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void add_to_array (int c[], int sum, int rem, int *j) {
    if (sum == 0) {
        return;
    }

    int quo = sum / 10;
    rem = sum % 10;
    if (quo < 10 && quo != 0) {
        c[*j] = quo;
        (*j)++;
        c[*j] = rem;
        (*j)++;
        return;
    } else {
        add_to_array(c, quo, rem, j);
        c[*j] = rem;
        (*j)++;
    }
}

int main () {
    int a[7] = {1, 2, 3, 4, 5, 6, 115};
    int b[9] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);

    int min_size = (size_a > size_b) ? size_b : size_a;
    //int max_entries_in_c = min_size * 2 + abs(size_b - size_a);

    int c[20] = {0};

    int i = 0;
    int j = 0;

    for (i = 0; i < min_size; i++) {
        int sum = a[i] + b[i];

        if (sum > 9) {
            add_to_array(c, sum, 0, &j);
        } else {
            c[j] = sum;
            j++;
        }
    }

    /*
     * Copy the rest
     */
    if (min_size == size_a) {
        for (; i < size_b; i++) {
            c[j] = b[i];
            j++;
        }
    } else {
        for (; i < size_a; i++) {
            c[j] = a[i];
            j++;
        }
    }

    for (i = 0; i < j; i++) {
        printf("%d, ", c[i]);
    }
    return 0;
}
