#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./leetcode6 <number>\n");
        exit(1);
    }

    int n = atoi(argv[1]);

    char **s = (char **) malloc (n * sizeof(char **));
    
    int i = 0;
    for (i = 0; i < n; i++) {
        s[i] = (char *) malloc (sizeof(char) * 10);
        memset(s[i], 0, sizeof(char) * 10);
    }

    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            s[i] = "FizzBuzz";
        } else if (i % 3 == 0) {
            s[i] = "Fizz";
        } else if (i % 5 == 0) {
            s[i] = "Buzz";
        } else {
            sprintf(s[i-1], "%d", i);
        }
    }

    for (i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}
