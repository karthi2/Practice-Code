#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char *src = NULL;
	char *dest = (char *) malloc (sizeof(char) * 10);
	memset(dest, 0, 10);

	memcpy(dest, src, 0);

    int a = 1;
    int c = 2;
    int *b = (int *) malloc (sizeof(a) * 10);
    memset(b, 0, sizeof(a) * 10);

    memcpy(b, &a, sizeof(a));
    memcpy((char *)(b + sizeof(int)), &c, sizeof(c));

    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

	return 0;
}
