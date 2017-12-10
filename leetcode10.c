#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./leetcode10 <num>\n");
        exit(1);
    }

    int i = 0;
    int j = 0;
    int power = 0;
    int num = atoi(argv[1]);
    
    int *arr = (int *) malloc (sizeof(int) * (num+1));
    
    for (i = 0; i <= num; i++) {
        if (i == 0) {
            arr[i] = 0;
            continue;
        }
        
        if (i == 1) {
            arr[i] = 1;
            continue;
        }
        
        if ((i & (i - 1)) == 0) {
            arr[i] = 1;
            power++;
        } else {
            arr[i] = 1 + arr[num - (int) pow(2, power)];
        }
    }

    for (i = 0; i <= num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
