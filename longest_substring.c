#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: longest_substring <string>\n");
        exit(1);
    }

    char *s = argv[1];
    int len = strlen(s);
    int i = 0;
    int k = 1;
    int max = 0;
    int res_length = 0;
    char *p = calloc(2 * sizeof(char), 1);
    
    char *res = calloc (sizeof(char) * len, 1);
    res[0] = s[0];
    
    for (i = 1; i < len; i++) {
        strncpy(p, &s[i], sizeof(char));
        if (strstr(res, p) == NULL) {
            res[k++] = s[i];
        } else {
            res_length = strlen(res);
            if (max < res_length) {
                max = res_length;
            }
            
            memset(res, 0, sizeof(char) * len);
            res[0] = s[i];
            k = 1;
        }
    }

    printf("%lu\n", max > strlen(res) ? max : strlen(res));
    return 0;
}
