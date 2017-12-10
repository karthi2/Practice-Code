#include <stdio.h>
#include <string.h>

#define PKG_CINT_FILE_NAME "/pkg/bin/cint_fia_debug.c"
int main () {
    long ipaddr = 134744072;
    char command_str[128] = {};

    sprintf(command_str,"scp root@%d.%d.%d.%d:%s /tmp/",
            (ipaddr >> (3*8)) & 0xFF,(ipaddr >> (2*8)) & 0xFF,
            (ipaddr >> (1*8)) & 0xFF,(ipaddr >> (0*8)) &
            0xFF,PKG_CINT_FILE_NAME);


    printf("Command String: %s\n", command_str);
    return 0;
}
