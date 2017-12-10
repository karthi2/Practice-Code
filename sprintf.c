#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIA_SHMOO_FILE "./junk_dir/junk_"

int main (int argc, char **argv) {
    char str[40] = {0};
    int unit = 1;

    sprintf(str, "%s%d", FIA_SHMOO_FILE,unit);

    printf("%s\n", str);

    char cmd[40] = {0};
    sprintf(cmd, "rm -rf %s", str);
    system(cmd);

    return 0;
}
