/*
 * What happens when you pass more fmt specifiers than there is data to printf?
 */
#include <stdio.h>
#include <string.h>

int main () {
    //int a = 5;

    //printf("Printing val %d and this is it %d", a);

    int reset_ctrl = 0xc000;
    int mask = ~0x30000;

    int res = reset_ctrl & mask;
    printf("%x", res);
    return 0;
}
