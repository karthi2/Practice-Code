#include <stdio.h>
#include <stdlib.h>

#define MAX_I 4
#define MAX_J 3

int main () {
    enum DIRECTION {
        RIGHT = 0,
        LEFT,
        DOWN,
        UP
    };

    int a[MAX_I][MAX_J] = {{1, 2, 3},
                           {5, 6, 7},
                           {9, 10, 11},
                           {13, 14, 15}};

    int b[MAX_I][MAX_J] = {{0}};
    enum DIRECTION d = RIGHT;

    int i = 0;
    int j = 0;

    while (b[i][j] != 1) {
        for ( ; j < MAX_J; j++) {
            if (b[i][j] != 1) {
                printf("%d, ", a[i][j]);
                b[i][j] = 1;
            } else {
                break;
            }
        }

        d = DOWN;
        j--;
        i++;

        for ( ; i < MAX_I; i++) {
            if (b[i][j] != 1) {
                printf("%d, ", a[i][j]);
                b[i][j] = 1;
            } else {
                break;
            }
        }

        d = LEFT;
        i--;
        j--;

        for ( ; j > -1; j--) {
            if (b[i][j] != 1) {
                printf("%d, ", a[i][j]);
                b[i][j] = 1;
            } else {
                break;
            }
        }

        d = UP;
        j++;
        i--;

        for ( ; i > -1; i--) {
            if (b[i][j] != 1) {
                printf("%d, ", a[i][j]);
                b[i][j] = 1;
            } else {
                break;
            }
        }

        d = RIGHT;
        i++;
        j++;
    }
}
