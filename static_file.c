#include <stdio.h>
#include "static_header.h"

int main () {
	int a = foo();
	printf("%d\n", a);
	return 0;
}
