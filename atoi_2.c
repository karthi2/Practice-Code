#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {
    char *str = argv[1];
    if (str == NULL) {
        return 0;
    }
    
    int i = 0;
    int len = strlen(str);
    int num = 0;
    int negative = 1;
    
    //1. Check if the number is negative
    if (str[0] == '-') {
        negative = -1;
        i++;
    } else if (str[0] == '+') {
        negative = 1;
        i++;
    }
    
    for (; i < len; i++) {
        if (str[i] != ' ') {
            break;
        }
    }
    
    for (; i < len; i++) {
        //1. Check if the character is a number
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            break;
        }
    }
    
    printf("%d\n", num * negative);
    return 0;
}
