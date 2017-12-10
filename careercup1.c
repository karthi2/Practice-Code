#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_pattern_present (int a[3][4], int pattern[3][3]) {
    int i = 0;
    int j = 0;

    int m = 0;
    int n = 0;

    int start_index = 0;
    int row_match = 0;

    for (m = 0; m < 3; m++) {
        for (n = 0; n < 3; n++) {
            int x = m;
            int y = n;
            for (i = 0; i < 4; i++) {
                row_match = 0;
                for (j = start_index; j < 4; j++) {
                    if (a[i][j] == pattern[x][y]) {
                        y++;

                        if (y == 1) {
                            start_index = j;
                        }

                        if (y == 3) {
                            row_match = 1;
                            break;
                        }
                    } else {
                        y = n;
                    }
                }

                if (row_match) {
                    x++;
                    if (x == 3) {
                        return 1;
                    }
                } else {
                    x = m;
                }
            }
        }
    }

    return 0;
}

int main () {
    int i = 0;
    int j = 0;

    int m = 3;
    int n = 3;

    int a[3][4];
    int pattern[3][3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &pattern[i][j]);
        }
    }

    int present = is_pattern_present(a, pattern);
    if (present) {
        printf("Pattern is present\n");
    } else {
        printf("Pattern is absent\n");
    }

    return 0;
}
