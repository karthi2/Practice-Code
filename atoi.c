#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: ./atoi <str>\n");
        return 0;
    }
    char *str = argv[1];
    int num = 0;
    int sum = 0;
    int i = 0;

    int len = strlen(str);

    while (len != 0) {
        if ((int)str[i] >= 48 && (int)str[i] <= 57) { 
            num = str[i] - '0';
            sum = sum * 10 + num;
            len--;
            i++;
        } else {
            printf("Invalid input. Cant represent as a number\n");
            exit(-1);
        }
    }

    printf("%d\n", sum);
	return 0;
}
