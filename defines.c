#include <stdio.h>
#include <time.h>

static const struct timespec    timer_const_10_sec = { 10, 0 };

const struct timespec *
timer_const_10_sec_fcn (void)
{
    return (&timer_const_10_sec);
}

#define LINK_MON_TIME timer_const_10_sec_fcn()

int main () {
    time_t link_mon_time_in_sec = LINK_MON_TIME->tv_sec;

    printf("%ld\n", link_mon_time_in_sec);
    return 0;
}
