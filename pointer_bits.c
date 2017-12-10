#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Routine to swap 0-len bits from the contents pointed to by A starting at
 * offset x in B
 */

int min (uint8_t m, uint8_t n) {
    return (m > n ? m : n);
}

void set_bits (uint8_t *a, uint8_t *b, int len, int offset) {
    if (a == NULL || b == NULL) {
        return;
    }

    /*
     * Set len bits from offset to 0 in B
     */
    uint32_t numberBytes = (len + 1)/8;

    while (numberBytes) {
        
        numberBytes--;
    }
    
    while (offset) {
        uint8_t val = *b;
        val = val >> min(offset, 8);
        offset -= 8;

        int i = 0;
        while (i != len) {
            if (val & (1 << i)) {
                val = val & 0xe;
            }
            i++;
        }
        /*
         * Put val back in b
         */
        
        b++;
    }

    /*
     * Read len bits from a
     */
    uint32_t mask = 1;
    while (len) {
        mask = mask | (mask << 1);
        len--;
    }
}
