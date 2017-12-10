#include <stdio.h>

int main () {
	short a;
	short *ptr_a = &a;

	int b = 65535;
	int *ptr_b = &b;

	*(int *) ptr_a =  *(int *) ptr_b;

	printf("%d. %d, %d\n", sizeof(short), sizeof(int), *ptr_a);
}
