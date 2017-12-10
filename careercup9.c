#include <stdio.h>

int main () {
    //int i = 0;
    unsigned long long fact = 1;
    int n = 20;

    //scanf("%d", &n);
    while (n > 0) {
        fact = fact * (n);
        n--;
    }

    printf("fact = %llu\n", fact);
    return 0;
}
