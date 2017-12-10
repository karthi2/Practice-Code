#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s2 {
    char* a;
}s2;

typedef struct s1 {
    s2 *b;
} s1;

void func (uint8_t *ptr) {
    unsigned long map1 = 123;
    unsigned long  map2 = 456;
    memcpy(ptr, &map1, sizeof(map1));
    memcpy(ptr + sizeof(map1), &map2, sizeof(map2));
}

int main () {
    s1 *m;
    //memset(&(m->b), 0, sizeof(s1));
    
    s2 n;
    //memset(&n, 0, sizeof(s2));

    //m->b = &n;

    unsigned long p[2] = {0};
    printf("sizeof %lu\n", sizeof(unsigned long));

    func((uint8_t *) p);
    printf("p[0] = %lu\n", p[0]);
    printf("p[1] = %lu\n", p[1]);

    unsigned long map1 = 678;
    unsigned long map2 = 890;

    memcpy((uint8_t *) p, &map1, sizeof(map1));
    memcpy((uint8_t *) p + sizeof(map1), &map2, sizeof(map2));

    printf("p[0] = %lu\n", p[0]);
    printf("p[1] = %lu\n", p[1]);

    return 0;
}
