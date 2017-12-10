#include <stdio.h>
#include <string.h>

int main () {
    char *filename = "";

    if (filename == NULL) {
        printf("Hello world\n");
    } else {
        printf("%lu", strlen(filename));
    }

    return 0;
}
