#include <stdio.h>
#include <stdlib.h>

struct integer_st {
    int *x[10];
} integer;

int main () {
    int *y;
    int i = 0;

    //integer.x = malloc(sizeof(int *));

    for (i = 0; i < 10; i++) {
        y = (int *) malloc (sizeof(int));
        *y = i;
        integer.x[i] = y;
    }
    
    for (i = 0; i < 10; i++) {
        printf("%d ", *integer.x[i]);
        free(integer.x[i]);
        integer.x[i] = NULL;
    }

    //free(x);
    
    return 0;
}
