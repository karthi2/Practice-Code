#include <stdio.h>
#include <string.h>

int main () {
    char name[10] = {0};
    strncpy(name, "SDR", strlen("SDR"));

    printf("%s\n", name);
    return 0;
}
