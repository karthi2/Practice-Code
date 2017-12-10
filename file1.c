#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char buf[32];
    long offset = 0;
    FILE *fp = fopen("test_file.txt", "r");

    while ((char) fgetc(fp) == '#') {
        (void) fgets(buf, sizeof(buf), fp);
        offset = ftell(fp);
    }

    long offset2 = ftell(fp);
    if (offset == offset2) {
        printf("Same offset\n");
    }

    fseek(fp, offset, SEEK_SET);
    while (1) {
        if (fgets(buf, sizeof(buf), fp) != NULL) {
            printf("%s", buf);
        } else {
            break;
        }
    }

    fclose(fp);

    return 0;
}
