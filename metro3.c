#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct _rows {
    unsigned long row;
    unsigned long col1;
    unsigned long col2;
};

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    unsigned long n = 0, m = 0, k = 0;
    
    scanf("%lu %lu %lu", &n, &m, &k);

    unsigned long row = 0;
    unsigned long col1 = 0;
    unsigned long col2 = 0;
    unsigned long count = 0;
    
    struct _rows info[k];
    
    for (int i = 0; i < k; i++) {
        memset(&info[i], 0, sizeof(struct _rows));
    }
    
    int found = 0;
    for (int i = 0; i < k; i++) {
        scanf("%lu %lu %lu", &row, &col1, &col2);
        
        for (int j = 0; j < k; j++) {
            /*
             * Case of overlap has 6 conditions
             */
            if (info[j].row == row-1) {
                if (info[j].col1 > col1 && (info[j].col2 > col2)) {
                    info[j].col1 = col1;
                } else if (info[j].col1 < col1 && (info[j].col2 < col2)) {
                    info[j].col2 = col2;
                } else if (info[j].col1 > col1 && (info[j].col2 < col2)) {
                    info[j].col1 = col1;
                    info[j].col2 = col2;
                }

                found = 1;
                break;
            }
        }
        
        if (!found) {
            info[i].row = row - 1;
            info[i].col1 = col1;
            info[i].col2 = col2;
        }
        
        found = 0;
    }
    
    int num_entries = 0;

    for (int j = 0; j < k; j++) {
        if (info[j].row == 0) {
            num_entries += 1;
        }
    }

    count = count + num_entries * m;

    for (int j = 0; j < k; j++) {
        if (info[j].row != 0) {
            count = count + (m - (info[j].col2 - info[j].col1 + 1));
        }
    }

    printf("%lu\n", count);
    return 0;
}
