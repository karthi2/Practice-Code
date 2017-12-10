#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int N = 0;
    int Q = 0;
    scanf("%d %d", &N, &Q);
    
    int lastAns = 0;
    
    int **arr = (int **) malloc (sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        arr[i] = malloc(sizeof(int) * N);
        if (arr[i] == NULL) {
            printf("malloc failure\n");
            exit(1);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            memset(&(arr[i][j]), -1, sizeof(arr[i][j]));
        }
    }
    
    int op = 0, x = 0, y = 0;
    int size = 0;
    for (int i = 0; i < Q; i++) {
        scanf("%d %d %d", &op, &x, &y);
        
        int index = (x ^ lastAns) % N;
        switch (op) {
            case 1:
            for (int j = 0; j < N; j++) {
                if (arr[index][j] == -1) {
                    arr[index][j] = y;
                    break;
                }
            }
            break;
            
            case 2:
            size = 0;
            for (int k = 0; k < N; k++) {
                if (arr[index][k] != -1) {
                    size++;
                }
            }
            lastAns = arr[index][y%size];
            printf("%d\n", lastAns);
            break;
            
            default:
            printf("Undefined op. Exiting\n");
            return -1;
        }
    }
     
    return 0;
}
