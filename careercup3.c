#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0;
    int j = 0;

    char a[5][5] = {'-', '-', '-', '-', '-',
                    '-', '-', '-', '-', '-',
                    '-', '-', '-', 'x', '-',
                    'x', '-', '-', '-', '-',
                    '-', '-', '-', '-', '-'};

    int rows[5] = {0};
    int columns[5] = {0};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (a[i][j] == 'x') {
                rows[i] = 1;
                columns[j] = 1;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (rows[i]) {
                a[i][j] = 'x';
            } else {
                break;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (columns[i]) {
                a[j][i] = 'x';
            } else {
                break;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
