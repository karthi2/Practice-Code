#include <stdio.h>
#include <sys/select.h>

int main () {
    printf("%d", FD_SETSIZE);
    return 0;
}
