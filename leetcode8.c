#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome (char *s) {
    int len = strlen(s);
    int i = 0;
    int j = len - 1;

    while (i <= j) {
        if(s[i] != s[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./leetcode8 <num>\n");
        exit(1);
    }

    int n = atoi(argv[1]);
    int start_num = 1;
    int i = 0;

    for (i = 1; i < n; i++) {
        start_num = start_num * 10;
    }
    
    int end_num = start_num * 10 - 1;

    uint64_t prod = 0;
    uint64_t result = 0;
    int j = 0;

#if 0
    printf("start_num = %d, end_num = %d\n", start_num, end_num);
#endif

    char *s = (char *) malloc (sizeof(char) * 30);
    memset(s, 0, sizeof(char) * 30);

    for (i = end_num; i >= start_num; i--)  {
        for (j = end_num; j >= start_num; j--) {
            prod = i * j;
            sprintf(s, "%llu", prod);

            //printf("%s: %llu\n", s, prod);

            if(isPalindrome(s)) {
                if (prod > result) {
                    result = prod;
                }
            }
        }
    }

    printf("%llu\n", result % 1337); 
    free(s);
    return 0;
}
