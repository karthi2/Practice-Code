#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {
    system("touch hello");
    sleep(10);
    system("rm -rf hello");
    return 0;
}
