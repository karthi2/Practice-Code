#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FSDB_WHITESPACE " \t\n"

int line_parse (char *line_buf) 
{
    char *asic_num;
    char *phy_link_num;
    uint32_t ok;
    char *token;
    char *strtok_ptr;
    char *pin_keyword;
    char *pin_name = NULL;
    
    char buf[512] = {0};
    memcpy(buf, line_buf, 512);

    char *keyword = strtok_r(buf, FSDB_WHITESPACE, &strtok_ptr);

    asic_num = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);

    phy_link_num = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);

    pin_keyword = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
    if (!pin_keyword) {
        return -1;
    }

    char *mux_sel;
    char *mux_from_fc;
    char *mux_from_fc_inst;
    char *mux_from_fc_link;
    char *mux_out;
    char *mux_out_inst;
    char *mux_out_link;

    char *rt_from_mux_inst;
    char *rt_from_mux_link;
    char *rt_out_keyword;
    char *rt_out_inst;
    char *rt_out_link;

    if (!strcmp(pin_keyword, "mux_en")) {
        mux_sel = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        mux_from_fc = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        mux_from_fc_inst = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        mux_from_fc_link = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        mux_out = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        mux_out_inst = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        mux_out_link = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
    } else {
        rt_from_mux_inst = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        rt_from_mux_link = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        rt_out_keyword = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        rt_out_inst = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        rt_out_link = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
    }


    char *mid_keyword = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
    mid_keyword = NULL;
    if (!strcmp(mid_keyword, "mid")) {
        pin_name = strtok_r(NULL, FSDB_WHITESPACE, &strtok_ptr);
        if (!pin_name) {
            return -2;
        }
    } else {
        return -3;
    }

    printf("asic_num = %s, phy_link_num = %s, pin_keyword = %s, mux_sel = %s, "
            "mux_from_fc = %s, mux_from_fc_inst = %s, mux_from_fc_link = %s, "
            "mux_out = %s, mux_out_inst = %s, mux_out_link = %s, "
            "rt_from_mux_inst = %s, rt_from_mux_link = %s, rt_out_keyword = %s, "
            "rt_out_inst = %s, rt_out_link = %s, pin_name = %s\n",
            asic_num, phy_link_num, pin_keyword, mux_sel, mux_from_fc,
            mux_from_fc_inst, mux_from_fc_link, mux_out, mux_out_inst,
            mux_out_link, rt_from_mux_inst, rt_from_mux_link,
            rt_out_keyword, rt_out_inst, rt_out_link, pin_name);
    return 0;
}

int main () {
    FILE *fp = fopen("./spitfire_fc12.dat", "r");
    int line_num = 0;

    char *line_buf = (char *) malloc (sizeof(char) * 512);
    memset(line_buf, 0, 512);

    while (fgets(line_buf, 512, fp) != NULL) {
        line_num++;
        //printf("%s\n", line_buf);

        int rc = line_parse(line_buf);
    }
    return 0;
}
