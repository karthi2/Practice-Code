#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int arr[] = {10, 2, 3, 4, 5, 9, 7, 8};
int out_arr[4] = {0};
int sum[15] = {-1};
int K = 23;


void swap (int x, int y) {
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void findCombo (int index, int n) {
    if (n == 0) {
        //print the selected elements;
        int j = 0;
        static int k = 0;
        int s = 0;

        for (j = 0; j < sizeof(out_arr)/sizeof(int); j++) {
            s = s + arr[j];
        }

        /*
        for (j = 0; j < sizeof(sum)/sizeof(int); j++) {
            if (s == sum[j]) {
                return;
            }
        }*/

        if (s == K) {
            sum[k++]  = s;
            for (j = 0; j < sizeof(out_arr)/sizeof(int); j++) {
                printf("%d ", out_arr[j]);
            }
            printf("\n");
        }

        return;
    }

    int i = 0;
    int lastint = 0;
    for (i = index; i < sizeof(arr)/sizeof(int); i++) {
        if (lastint == arr[i]) {
            continue;
        } else {
            lastint = arr[i];
        }

        swap(index, i);
        out_arr[index] = arr[index];
        findCombo(index + 1, n - 1);
        swap(index, i);
    }
}

int main () {
    findCombo(0, 4);
    return 0;
}
