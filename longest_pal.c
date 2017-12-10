#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./longest_pal <string>\n");
        return -1;
    }

    char *s = argv[1];

    int i = 0;
    int len = strlen(s);
    int count[125] = {0};
    int longest_len = 0;
    
    for (i = 0; i < len; i++) {
        if (count[s[i] - 'A']) {
            count[s[i] - 'A']--;
            longest_len += 2;
        } else {
            count[s[i] - 'A']++;
        }
    }
    
    for (i = 0; i < 125; i++) {
        if (count[i]) {
            printf("%d\n", longest_len + 1);
            return 0;
        }
    }
    /*
    for (i = 0; i < 52; i++) {
        if (count[i] == 0) {
            continue;
        } else if (count[i] % 2 == 0) {
            longest_len += count[i];
        } else {
            if (count[i] > 2) {
                longest_len += count[i]-1;
            } else if (!odd_counted) {
                longest_len += 1;
                odd_counted = 1;
            }
        }
    }*/

    printf("%d\n", longest_len);
    return 0;
}
