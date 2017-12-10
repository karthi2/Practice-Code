#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    FILE *fp = fopen("string.txt", "r");
    char *buf = (char *) malloc(sizeof(char) * 32768);
    fgets(buf, 32768, fp);

    /*
    if (argc < 2) {
        printf("Usage: ./leetcode5 <string>\n");
        exit(1);
    }*/

    //char *s = argv[1];
    int alphabet[26] = {0};
    int i = 0;

    for (i = 0; i < strlen(buf); i++) {
        alphabet[buf[i] - 'a']++;
    }

    for (i = 0; i < strlen(buf); i++) {
        if (alphabet[buf[i] - 'a']  == 1) {
            printf("%c\n", buf[i]);
            break;
        }
    }

    for (i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }
    printf("\n");

    return 0;
}
