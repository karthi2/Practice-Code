#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p = NULL;
    int a = 10;
    p = &a;

    FILE *fp = fopen("test_file.txt", "w");
    fprintf(fp, "%s Addr: %p, Content =  %d\n", __FUNCTION__, p, *p);
    fprintf(fp, "%s Next Addr: %p, Content =  %d\n", __FUNCTION__, p+1, *(p+1));
    fclose(fp);

    return 0;
}
