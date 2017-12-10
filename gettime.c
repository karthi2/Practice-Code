#include <stdio.h>
#include <sys/time.h>

int main () {
    struct timeval curr_time = {};
    (void)gettimeofday(&curr_time, NULL);
    unsigned int ts = (curr_time.tv_sec);

    printf("%d\n", ts);
    return 0;
}
