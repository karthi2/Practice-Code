#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void fib_iter (int n) {
    int i = 0;
    int num1 = 0;
    int num2 = 1;

    printf("%d %d ", num1, num2);

    for (i = 0; i < n - 2; i++) {
        printf("%d ", num1+num2);
        int temp = num2;
        num2 = num1+num2;
        num1 = temp;
    }
    printf("\n");
}

int fib (int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main (int argc, char **argv) {
    int i = 0;
    int n = atoi(argv[1]);

    fib_iter(n);

    for (i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    printf("\n");

    return 0;
}
