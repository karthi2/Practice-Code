#include <stdio.h>

int main () {
    int i = 1;
    printf("He");
    do {
        while (i < 5) {
            printf("Hello");
            i++;
        }
        fflush(stdout);
    } while (1);
}
