#include <stdio.h>

#define MAX_LC 16
#define MAX_FAP_PER_LC 2

void fapid_to_bitmap_set (int *fapids,
                          int  cnt,
                          int *fapid_bitmap) {
    int asic_id = 0;
    int rack = 0;
    int rackbit = 0;
    int i = 0;

    for (i = 0; i < cnt; i++) {
        asic_id = fapids[i]/2;
        if (asic_id < 48) {
            rack = asic_id/96;
            rackbit = asic_id%96;
            fapid_bitmap[15 * rack + 0] = fapid_bitmap[15 * rack + 0] | (1 << rackbit);
        } else {
            asic_id = asic_id - 48;
            rack = asic_id/96;
            rackbit = asic_id%96;
            fapid_bitmap[15 * rack + 1] = fapid_bitmap[15 * rack + 1] | (1 << rackbit);
        }
    }
}

int main () {

    int fapid_bitmap[MAX_LC * MAX_FAP_PER_LC] = {0};
    int fapids[6] = {35, 41, 95, 100, 104, 145};
    int i = 0;
    //int j = 0;

    fapid_to_bitmap_set(fapids, sizeof(fapids)/sizeof(int), fapid_bitmap);

    for (i = 0; i < 32; i++) {
            if (fapid_bitmap[i] != 0) {
                printf("%d: %d ", i, fapid_bitmap[i]);
            }
        //printf("\n");
    }

    return 0;
}
