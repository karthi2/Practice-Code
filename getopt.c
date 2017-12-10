#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char **argv) {
    char c;
    int i = 0;

    while (1) {
        while ((c = getopt(argc, argv, "ae:f:h:i:lmn:oqrstuvwxz:AEIB")) != EOF) {
            switch (c) {
            case 'A':
                printf("A\n");
                //printf("%s\n", optarg);
                break;
            case 'E':
                printf("E\n");
                //printf("%s\n", optarg);
                break;
            case 'I':
                printf("I\n");
                //printf("%d\n", atoi(optarg));
                break;
            case 'B':
                printf("B\n");
                //printf("%d\n", atoi(optarg));
                break;
            case 'h':
                printf("%d\n", atoi(optarg));
                break;
            }
        }
        
        printf("=========================\n");

        for (i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }

        break;
    }

    return 0;
}
