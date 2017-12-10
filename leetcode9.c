#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        exit(1);
    }

    int x = atoi(argv[1]);
    char *s = (char *)malloc(sizeof(char) * 11);
    memset(s, 0, 11);
    
    sprintf(s, "%d", x);
    
    int i = 0;
    
    if (s[0] == '-') {
        i = 1;
    }
    
    int j = strlen(s) - 1;
    char temp = '\0';
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    
    int64_t res = atoll(s);
    if ((res > INT_MAX) || (res < INT_MIN)) {
        printf("%llu %s\n", res, s);
    }
    
    printf("%d\n", atoi(s));
    return 0;
}
