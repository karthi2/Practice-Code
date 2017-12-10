#include <stdio.h>
#include <string.h>
#include <time.h>
  
char *get_date()
{
    char    buf[80];
    time_t  now = time(0);
    strcpy(buf, ctime(&now));
    return buf;
}
 
int main(int argc, char *argv[])
{
    char *date = get_date();
    printf("date=%s\n", date);
    return 0;
}
