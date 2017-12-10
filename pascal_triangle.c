#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** generate (int num_rows, int **columnSizes) {
    int i = 0;
    int j = 0;
    
    int **arr = NULL;
    
    arr = (int **) malloc (sizeof(int *) * num_rows);
    *columnSizes = (int *) malloc (sizeof(int) * num_rows);
        
    memset(*columnSizes, 0, sizeof(int) * num_rows);
    
    for (i = 0; i < num_rows; i++) {
        arr[i] = (int *) malloc(sizeof(int) * num_rows);
        memset(arr[i], 0, sizeof(int) * num_rows);
    }

    int count = 0;
    for (i = 0; i < num_rows; i++) {
        for (j = 0; j <= i; j++) {
            if ((j == 0) || (j == i)) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            count++;
        }
        (*columnSizes)[i] = count;
        count = 0;
    }

    return arr;
}

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./pascal <num>\n");
        exit(10);
    }

    int *columnSizes = NULL;
    int num_rows = atoi(argv[1]);
    int **arr = generate(num_rows, &columnSizes);
    /*
    int num_rows = atoi(argv[1]);
    int i = 0;
    int j = 0;
    int arr[num_rows][num_rows];

    for (i = 0; i < num_rows; i++) {
        for (j = 0; j < num_rows; j++) {
            arr[i][j] = 0;
        }
    }

    for (i = 0; i < num_rows; i++) {
        for (j = 0; j <= i; j++) {
            if ((j == 0) || (j == i)) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    for (i = 0; i < num_rows; i++) {
        for (j = 0; j < num_rows; j++) {
            if (arr[i][j] == 0) {
                continue;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }*/

    int i = 0;
    int j = 0;

    for (i = 0; i < num_rows; i++) {
        for (j = 0; j < num_rows; j++) {
            if (arr[i][j] == 0) {
                continue;
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
