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
    
    struct _rows info[m];
    
    for (unsigned long i = 0; i < m; i++) {
        memset(&info[i], 0, sizeof(struct _rows));
    }
    
    for (int i = 0; i < k; i++) {
        scanf("%lu %lu %lu", &row, &col1, &col2);
        
        if (info[row-1].row == row-1) {
            //there was a previous entry here. Look for overlaps
            if (info[row-1].col1 > col1) {
                //update
                info[row-1].col1 = col1;
            }
            
            if (info[row-1].col2 > col2) {
                //update
                info[row-1].col2 = col2;
            }
        } else {
            info[row-1].row = row-1;
            info[row-1].col1 = col1; 
            info[row-1].col2 = col2;
        }
    }
    
    for (unsigned long i = 0; i < m; i++) {
        if(info[i].row != 0) {
            count = count + (m - (info[i].col2 - info[i].col1 + 1));
        } else {
            count += m;
        }
    }
    printf("%lu\n", count);
    return 0;
}
