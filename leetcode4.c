#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int i = 0;
    int j = 0;
    int k = 0;
    int index_gap = 0;
    int break1 = 0;
    int break2 = 0;
    
    printf("%lu\n", sizeof(long));
    if (numRows == 1 || numRows == strlen(s)) {
        return s;
    }

    for (i = 1; i < numRows; i++) {
        index_gap += 2;
    }
    
    char *out = (char *) malloc (strlen(s) * sizeof(char));
    
    int write_index1 = 0;
    int write_index2 = 0;

    for (i = 0; i < numRows; i++) {
        out[j++] = s[i];
        
        if (!(i == 0 ||  (i == numRows - 1))) {
            write_index1 = index_gap - i;
            if (write_index1 < strlen(s)) {
                out[j++] = s[write_index1];
            }

            write_index2 = index_gap + i;
            if (write_index2 < strlen(s)) {
                out[j++] = s[write_index2];
            }

            k = 1;
            while (break1 != 1 && break2 != 1) {
                if (write_index1 + index_gap * k < strlen(s)) {
                    out[j++] = s[write_index1 + index_gap * k];
                } else {
                    break1 = 1;
                }

                if (write_index2 + index_gap * k < strlen(s)) {
                    out[j++] = s[write_index2 + index_gap * k];
                } else {
                    break2 = 1;
                }
                k++;
            }

            break1 = 0;
            break2 = 0;
            continue;
        }

        k = 1;
        while ((i + index_gap * k) < strlen(s)) {
            out[j++] = s[i + index_gap * k];
            k++;
        }
    }
    
    return out;
}

int main (int argc, char **argv) {
    if (argc < 3) {
        printf("Usage: ./leetcode4 <string> <num_rows>\n");
        exit(1);
    }

    int rows = atoi(argv[2]);
    char *str = convert(argv[1], rows);
    printf("%s\n", str);

    int rc = strcmp(str,
            "Aaidoeswr,haenme,rtesqecouishtabrateaeaietedrcinwtgnrlloacsoajsmnsoucutoadodiiesplnrmiaodprs,ubroohreunefnttacneedhsmwynihrieto,iheeaalwnefrdutettpntainnwrdvdr.");
    printf("%d\n", rc);
    return 0;
}
