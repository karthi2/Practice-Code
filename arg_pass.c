#include <stdio.h>
#include <string.h>

void func (char *host_version, int len) {
    printf("%lu\n", strlen(host_version));
    strncpy(host_version, "hello m d ", len);
    host_version[len - 1] = '\0';
}

int main () {
    char host_version[10] = {0};
    func(host_version, 10);

    printf("%s\n", host_version);
    return 0;
}
