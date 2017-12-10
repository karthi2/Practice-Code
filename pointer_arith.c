#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
	int *a = (int *) malloc (4 * sizeof(int));

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;

	printf("%p\n%d\n%d\n%d\n%d\n", a, *a, *(a+1), *(a+2), *(a+3));


    char *b = NULL;
    char *buf = (char *) malloc (10 * sizeof(char));
    memcpy(buf, b+10, 5);

	return 0;
}
