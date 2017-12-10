#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *arr = NULL;
int num_digits = 0;

char* getConversion (int digit, int index) {
    char *str = NULL;
    char *retstr = malloc(sizeof(char) * 20);
    switch(index) {
        case 1:
            switch (digit) {
                case 0:
                    return "";
                case 1:
                    return "one";
                case 2:
                    return "two";
                case 3:
                    return "three";
                case 4:
                    return "four";
                case 5:
                    return "five";
                case 6:
                    return "six";
                case 7:
                    return "seven";
                case 8:
                    return "eight";
                case 9:
                    return "nine";
            }
            break;
        case 2:
            switch (digit) {
                case 0:
                    return "";
                case 1:
                    return "ten ";
                case 2:
                    return "twenty ";
                case 3:
                    return "thirty ";
                case 4:
                    return "forty ";
                case 5:
                    return "fifty ";
                case 6:
                    return "sixty ";
                case 7:
                    return "seventy ";
                case 8:
                    return "eighty ";
                case 9:
                    return "ninety ";
            }
            break;
        case 3:
            switch (digit) {
                case 0:
                    return "";
                default:
                    str = getConversion(digit, 1);
                    strncpy(retstr, str, strlen(str));
                    strncat(retstr, " hundred ", 9);
                    return retstr;
            }
            break;
        case 4:
            switch(digit) {
                case 0:
                    return "";
                default:
                    str = getConversion(digit, 1);
                    strncpy(retstr, str, strlen(str));
                    strncat(retstr, " thousand ", 10);
                    return retstr;
            }
            break;
        case 5:
            switch (digit) {
                case 0:
                    return "";
                default:
                    str = getConversion(digit, 2);
                    strncpy(retstr, str, strlen(str));
                    //strncat(retstr, " thousand ", 10);
                    return retstr;
            }
            break;
        case 6:
        case 7:
        default:
            break;
    }
    return NULL;
}

void printText (int num) {
    int i = 0;
    char *str = NULL;
    char *final_str = malloc(sizeof(char) * 100);
    memset(final_str, 0, 100);
    
    if (num_digits == 2) {
        switch (num) {
        case 11:
            printf("Eleven\n");
            break;
        case 12:
            printf("Twelve\n");
            break;
        case 13:
            printf("Thirteen\n");
            break;
        case 14:
            printf("Fourteen\n");
            break;
        case 15:
            printf("Fifteen\n");
            break;
        case 16:
            printf("Sixteen\n");
            break;
        case 17:
            printf("Seventeen\n");
            break;
        case 18:
            printf("Eighteen\n");
            break;
        case 19:
            printf("Nineteen\n");
            break;
        }
        return;
    }

    for (i = num_digits - 1; i >= 0; i--) {
        str = getConversion(arr[i], i+1);
        if (str == NULL) {
            printf("Bad case\n");
            return;
        }
        strncat(final_str, str, strlen(str));
    }

    printf("%s\n", final_str);

    free(final_str);
}

int getDigits (int num) {
    arr = malloc(sizeof(int) * 10);
    memset(arr, 0, (sizeof(int) * 10));
    int i = 0;
    int rem = 0;

    while (num > 0) {
        rem = num % 10;
        num = num/10;

        arr[i] = rem;
        i++;
    }

    return i;
}

int main (int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: ./num2text <num>\n");
        exit(1);
    }

    int num = atoi(argv[1]);
    num_digits = getDigits(num);

    printText(num);
    free(arr);
}
