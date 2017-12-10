/*
 * Find the longest substring palindrome in a given string
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main (int argc, char **argv) {
    if (argc == 1 || argc > 2) {
        printf("Usage: ./lps <string>\n");
        exit(1);
    }

    char *input_str = argv[1];

    if (input_str = '') {
        printf("Empty string. No palindrome\n");
        exit(1);
    }

    int i = 0;
    int len = strlen(input_str);
    int max_len_palindrome = 0;
    char *max_substring = (char *) malloc (len * sizeof(char));

    if (max_substring == NULL) {
        printf("Memory allocation failed for max_substring\n");
        exit(1);
    }
    memset(max_substring, 0, len);

    possible_palindrome = 0;
    str_seen_so_far = (char *) malloc (len * sizeof(char));
    if (str_seen_so_far == NULL) {
        printf("Memory allocation failed for max_substring\n");
        exit(1);
    }
    memset(str_seen_so_far, 0, len);

    str_seen_so_far = input_str[0];

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (j > len/2) {
                break;
            } else {
                if (input_str[j] == str_seen_so_far[strlen(str_seen_so_far) - 1]) {
                    possible_palindrome = 1;
                    str_seen_so_far[strlen(str_seen_so_far)] = input_str[j];
                } else {
                    possible_palindrome = 0;
                }
            }
        }
    }

    return 0;
}
