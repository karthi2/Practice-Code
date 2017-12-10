#include <stdio.h>
#include <stdlib.h>

uint32_t reverseBits(uint32_t n) {
    uint32_t reverse_num = 0;
    int i = 0;
    
    for (i = 0; i < 32; i++) {
        int bit = n & 1;
        n = n >> 1;
        reverse_num = reverse_num | (bit << (31 - i));
    }
    
    return reverse_num;
}

int main (int argc, char **argv) {
    uint32_t rev = reverseBits(atoi(argv[1]));

    printf("%u\n", rev);
    return 0;
}
