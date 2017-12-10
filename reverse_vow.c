#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
    char *s = argv[1];
    int len = strlen(s);
    char *out = calloc(sizeof(char) * len + 1, 1);
    int i = 0;
    int k = 0;
    int j = len - 1;
    int l = len - 1;
    
    while (1) {
        while (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i]
                != 'u' && s[i] != '\0' && s[i] != 'A' && s[i] != 'E' && s[i] !=
                'I' && s[i] != 'O' && s[i] != 'U') {
            out[k++] = s[i++];
        }
        
        if (s[i] == '\0') {
            break;
        }
        
        while (s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j]
                != 'u' && j > 0 && s[j] != 'A' && s[j] != 'E' && s[j] != 'I' &&
                s[j] != 'O' && s[j] != 'U') {
            out[l--] = s[j--];
        }
        
        if (i > j || j < 0) {
            printf("Out: %s\n", out);
            break;
        }
        
        out[k++] = s[j--];
        out[l--] = s[i++];
    }
    
    return 0;
}
