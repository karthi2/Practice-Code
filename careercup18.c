#include <stdio.h>
#include <stdlib.h>

int index = 0;
char last_regex_char = '\0';
char last_str_char = '\0';

void regmatch (char *str, char pattern) {
    int i = 0;
    int slen = strlen(str);

    if (last_regex_char == '*' || last_regex_char == "+") {
        //printf("Invalid regex\n");
        return 0;
    }

    last_regex_char = pattern;

    for (i = index; i < slen; i++) {
        index = i;
        switch (pattern) {
            case '*':
                return 1;
            case '.':
                if (index < slen) {
                    last_str_char = str[i];
                    return 1;
                } else {
                    return 0;
                }
            case '+':
                if (last_str_char == str[i]) {
                    continue;
                } else {
                    last_str_char = str[i];
                }
                break;
            default:
                last_str_char = str[i];
                if (last_regex_char == '*') {

                } else if (last_regex_char == '+') {

                }

                if (str[i] == pattern) {
                    return 1;
                }
        }
    }
}

int main () {
    char *str = "adhjnkjnkerew";
    char *pattern = "a.*j+w*";

    int patlen = strlen(pattern);

    int i = 0;

    for (i = 0; i < patlen; i++) {
        int val = regmatch(str, pattern[i]);
        if (val) {
            continue;
        } else {
            prinf("Not found\n");
        }
    }

    return 0;
}
