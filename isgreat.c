#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    int result;
    int a = atoi(argv[1]);

    int b = 5;
    int c = 10;
    int arr[] = {b ,c};

    //result = a ? b : c
    result = arr[a == 0];

    printf("%d\n", result); 
    return 0;
}
