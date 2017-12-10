#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main () {
    FILE *fp = fopen("/Users/kartram2/Documents/testcases/kbr.txt", "w");
    while (1) {
        fprintf(fp, "%s: Hello\n", __FUNCTION__);
        sleep(1);
        fflush(fp);
    }
    fclose(fp);

    return 0;
}
