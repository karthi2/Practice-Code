#include <stdio.h>

#define DC_FRU_TYPE_MAJOR_BACKPLANE (0x6000 + 1)
#define DC_FRU_MAJOR_VALUE_SHIFT 16
#define DC_BACKPLANE_FRU_TYPE_MINOR_NCS5516 0x1

int main () {
    printf("0x%x\n", (DC_FRU_TYPE_MAJOR_BACKPLANE << DC_FRU_MAJOR_VALUE_SHIFT |
                DC_BACKPLANE_FRU_TYPE_MINOR_NCS5516));

    return 0;
}
