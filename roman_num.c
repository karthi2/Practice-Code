#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getVal (char roman_num) {
    switch(roman_num) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            printf("Invalid num\n");
            exit(1);
    }
}

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./roman <ROMAN_NUMBER>\n");
        exit(1);
    }

    char* roman_num = argv[1];

    int slen = strlen(roman_num);
    int i = 0;
    int sum = 0;
    int repeat_count = 1; /* Max 3 */

    for (i = 0; i < slen-1; i++) {
        int val1 = getVal(roman_num[i]);
        int val2 = getVal(roman_num[i+1]);

        if (val1 > val2) {
            if (repeat_count > 1) {
                /*
                 * Already counted
                 */
                repeat_count = 1;
                continue;
            }
            sum = sum + val1;
        } else if (val1 < val2) {
            sum = sum + (val2 - val1);
            i++;
            repeat_count = 1;
        } else {
            repeat_count++;
            sum = sum + val1 + val2;

            if (repeat_count == 3) {
                sum = sum - val1;
                repeat_count = 1;
            } else if (repeat_count > 3) {
                printf("Invalid num\n");
                exit(1);
            }
        }
    }

    printf("Integer representation = %d\n", sum);
    return 0;
}
