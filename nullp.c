#include <stdio.h>
#include <stdlib.h>


void foo (void *a) {
	if (a == NULL) {
		printf("1\n");
	} else {
		printf("0\n");
	}
}

int main () {
	int *a = (int *) malloc (sizeof(int));
	a = NULL;
	//void *a = NULL;
	foo(&a);
	return 0;
}
