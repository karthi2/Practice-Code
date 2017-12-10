#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare (char *v1, char *v2) {
    int len1 = strlen(v1);
    int len2 = strlen(v2);

    int i = 0;
    int j = 0;

    if (len1 == 0 && len2 == 0) {
        return 0;
    }

    if (len1 == 0) {
        return -1;
    }

    if (len2 == 0) {
        return 1;
    }

    while (i != len1 || j != len2) {
        if (v1[i] == '.') {
            i++;
            continue;
        }
        
        if (v2[j] == '.') {
            j++;
            continue;
        }

        if ((int)atoi(&v1[i]) < (int)atoi(&v2[j])) {
            return -1;
        } else if ((int)atoi(&v1[i]) > (int)atoi(&v2[j])) {
            return 1;
        } else {
            i++;
            j++;
        }
    }

    if (i == len1 && j == len2) {
        return 0;
    }

    if (i == len1) {
        return -1;
    }

    return 1;
}

int main (int argc, char **argv) {
    char *v1 = argv[1];
    char *v2 = argv[2];

    int rc = compare(v1, v2);
    printf("%d\n", rc);
}
