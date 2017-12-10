#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int main (int argc, char **argv) {
    char mnt[2][20] = { "/dev/disk1", "/install_repo"};
    struct stat buf = {};
    int rc = 0;
    int i = 0;

    for (i = 0; i < 2; i++) {
        rc = stat(mnt[i], &buf);
        if (rc != 0) {
            printf("Partition has failed. %s: %s\n", mnt[i], strerror(errno));
        } else {
            printf("Partition in good health\n");
        }
        printf("rc = %d\n", rc);
    }

    return 0;
}
