#include <stdio.h>
#include <string.h>

int main () {
    char *str = "abcdefghijklmnopqrstuvwxyz";
    char *str1 = "Check MC group configuration in the sending device. Check MC group destination assigment at the sending device.";
    printf("%lu\n", strlen(str1));
    int len = strlen(str);
    char newstr[len+1];

    int i = 0, j = len - 1;

    while (i <= j) {
        if (i == j) {
            newstr[i] = str[i];
        }
        newstr[i] = str[j];
        newstr[j] = str[i];
        i++;
        j--;
    }
    newstr[len] = '\0';

    printf("%s\n", newstr);

    char tmp[36];
    char *p = tmp;
    p = "0\000\000t\016\t\000\000\264\305\256t\001\000\000\000\345{Mv\377\377\377\377\214\354gv\001\000\000\000L\333\354v";

    printf("tmp = %x, %x\n", tmp, p);
    return 0;
}
