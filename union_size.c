#include <stdio.h>

int main () {
	union {
		struct {
			int A;
		} s1;

		struct {
			int B;
			char C;
		} s2;

		struct {
			int D;
			float E;
			char *string;
		} s3;
	} u;

	printf("size of union u = %lu\n", sizeof(u));
	return 0;
}
