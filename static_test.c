#include <stdio.h>
#include <stdlib.h>

extern void incr(int *x);

int main() {
	static int a = 10;
	static int *x = &a;

	incr(x);	

	printf("%d\n", a);
	return 0;
}
