#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void reverse (char *s, int i, int j) {
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main (int argc, char **argv) {
    char *s = argv[1];
    int len = strlen(s);
    int i = 0;
    int j = 0;

    while (1) {
        while (s[j] != ' ' && s[j] != '\0') {
            j++;
        }
    
        reverse(s, i, j-1);

        i = j + 1;
        j = j + 1;

        if (s[j] == '\0') {
            break;
        }
    }

    printf("%s\n", s);

    return 0;
}
