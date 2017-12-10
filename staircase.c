#include <stdio.h>
#include <string.h>

void StairCase(int n) {    
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        int no_hashes = n - i;
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int _n;
    scanf("%d", &_n);
    
    StairCase(_n);
    
    return 0;
}
