#include <stdio.h>
#include <stdlib.h>

void func (int a, int *b) {
    if (b) {
        printf("%d\n", *b);
    }
}

int main () {
    int *p = {0};
    func(0, 0);
    return 0;
}
