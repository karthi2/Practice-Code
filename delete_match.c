#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **argv) {
    if (argc < 3) {
        printf("Usage: ./delete_match <str1> <str2>\n");
        exit(1);
    }

    char *word1 = argv[1];
    char *word2 = argv[2];

    /*
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    
    int count1[26] = {0};
    int count2[26] = {0};
    int i = 0;
    
    for (i = 0; i < len1; i++) {
        count1[word1[i] - 'a']++;
    }
    
    for (i = 0; i < len2; i++) {
        count2[word2[i] - 'a']++;
    }
    
    int ops = 0;
    
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            ops += abs(count1[i] - count2[i]);
        }
    }

    printf("%d\n", ops);
    */

    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int dp[len2];
    memset(dp, 0, sizeof(int) * len2);
    int lcs = 0;

    for(int i = 0; i < len1; i++) {
        int cur_max = 1;
        for(int j = 0; j < len2; j++) {
            int temp = dp[j];
            if(word2[j] == word1[i]) {
                dp[j] = cur_max;
            }
            cur_max = cur_max > (temp + 1) ? cur_max : temp+1;
            lcs = lcs > dp[j] ? lcs : dp[j];
        }
    }

    printf("%d\n", len1 - lcs + len2 - lcs);
    return 0;
}
