#include <stdio.h>
#include <string.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./longcharseq <string>\n");
        return 1;
    }

    char longest;
    int  max_count = 0;
    int  count = 0;
    int  i;
    char *string = argv[1];

    int length = strlen(string);

    for (i = 1; i < length; i++) {
        while (string[i] == string[i-1] && i < length) {
            count++;
            i++;
        }

        if (count > max_count) {
            max_count = count;
            longest = string[i-1];
        }

        count = 1;
    }

    printf("longest character: %c\nlongest length: %d\n", longest, max_count);

    return 0;
}
