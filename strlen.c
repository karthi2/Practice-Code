#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *str = "3.14.23-WR7.0.0.2_standard";
    printf("strlen(str) = %lu\n", strlen(str));

    FILE *version_file = fopen("version_file", "r");

    char *host_ver = malloc (25 * sizeof(char));
    fgets(host_ver, 25, version_file);

    printf("host version = %s, strlen(host_ver) = %lu\n", host_ver,
            strlen(host_ver));

    printf("%d\n", strcmp("main", __FUNCTION__));
    fclose(version_file);


    char host_version[26] = {'\0'};
    printf("sizeof(host_version) = %lu\n", sizeof(host_version));
    strncpy(host_version, str, 25);
    printf("strlen(host_version) = %lu, host_version = %s\n",
            strlen(host_version), host_version);

    return 0;
}
