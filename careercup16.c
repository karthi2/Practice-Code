#include <stdio.h>
#include <stdlib.h>

int main () {
    char strings[][15] = {"HelloWorld", "HowAreYou", "HeMan", "Horse", "HebreW", "HNoOne", "H"};
    char *pattern = "Hn";

    int num_str = sizeof(strings)/sizeof(strings[0]);
    //printf("num_str = %d\n", num_str);
    int i = 0;


    for (i = 0; i < num_str; i++) {
        char *str = strings[i];
        int j = 0;
        int k = 0;

        while(str[j] != '\0') {
            if (pattern[k] == str[j]) {
                j++;
                k++;
                if (pattern[k] == '\0') {
                    printf("%s ", str);
                    break;
                }
            } else if (k == 0){
                break;
            } else {
                j++;
            }
        }
    }
}
