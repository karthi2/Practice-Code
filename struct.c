#include <stdio.h>

typedef struct {
	struct INTEGER {
		int a;
	} vmr;
} NUMBER;

struct node {
	int a;
} var;

int main () {
	NUMBER N;

	N.vmr.a = 10;

	NUMBER B;
	printf("%d\n", B.vmr.a);

	var.a = 20;
}
