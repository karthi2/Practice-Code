#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_BITS_IN_BYTE 8

int main (int argc, char **argv) {
    int16_t slot_num = atoi(argv[1]);
    uint8_t bitmap[8] = {0, 252, 15, 0, 0, 0, 0, 0};
    uint8_t byte_pos, bit_start_pos;
    uint16_t mask_16bit;

    printf("%d\n", sizeof(uint8_t));
    
    byte_pos = (slot_num * 6) / NUM_BITS_IN_BYTE;
    bit_start_pos = (slot_num * 6) % NUM_BITS_IN_BYTE;

    printf("%d\n", (*(uint16_t *)&(bitmap[byte_pos])));
    mask_16bit = ((*(uint16_t *)&(bitmap[byte_pos])) >> bit_start_pos);
    printf("%8d\n", mask_16bit & 0x3F);
}
