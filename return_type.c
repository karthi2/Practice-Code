#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef uint64_t fgid_bitmap;

typedef struct fgid_rack_info_1 {
    fgid_bitmap            *fgid_bitmap_table;
} fgid_rack_info_st;

typedef struct fgid_rack_info_2 {
    fgid_bitmap            *fgid_bitmap_table[2];
} fgid_rack_info_st2;

fgid_bitmap *
fgid_bitmap_get (fgid_rack_info_st2 fgid_rack_info) {
    return fgid_rack_info.fgid_bitmap_table[0];
}

int main (int argc, char **argv) {
    uint32_t i = atoi(argv[1]);

    if (i == 1) {
        fgid_rack_info_st fgid_rack_info;
        fgid_rack_info.fgid_bitmap_table = malloc(sizeof(fgid_bitmap) * 2);
    } else {
        fgid_rack_info_st2 fgid_rack_info;
        fgid_rack_info.fgid_bitmap_table[0] = malloc(sizeof(fgid_bitmap) * 2);
        fgid_rack_info.fgid_bitmap_table[1] = malloc(sizeof(fgid_bitmap) * 2);

        fgid_rack_info.fgid_bitmap_table[0][0] = 0xffffffff;
        fgid_rack_info.fgid_bitmap_table[0][1] = 0xabababab;
        /*
        memset((void *) fgid_rack_info.fgid_bitmap_table[0], 1,
                sizeof(fgid_rack_info.fgid_bitmap_table[0]));

        memset(fgid_rack_info.fgid_bitmap_table[1], 2,
                sizeof(fgid_rack_info.fgid_bitmap_table[1]));
        */

        uint64_t *bitmap = fgid_bitmap_get(fgid_rack_info);

        /*
        bitmap[0] = fgid_rack_info.fgid_bitmap_table[0][0];
        bitmap[1] = fgid_rack_info.fgid_bitmap_table[1][0];
        */

        printf("%llu\n%llu\n", bitmap[0], bitmap[1]);
    }

    return 0;
}
