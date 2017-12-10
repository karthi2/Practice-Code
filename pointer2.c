#include <stdio.h>
#include <stdlib.h>

void func_a (uint64_t *addr1, uint64_t *addr2) {
    addr1 = malloc (2 * sizeof(int));
    addr2 = malloc (3 * sizeof(int));
}

int main () {
    int *addr1 = NULL;
    int *addr2 = NULL;

    func_a((uint64_t *) &addr1, (uint64_t *) &addr2);

    printf("0x%llx\n", (uint64_t) &addr1);
    return 0;
}
