#include <stdio.h>

int main () {
	unsigned long long roid = (unsigned long long ) 1 << 32;
	unsigned long long sub_roid = 0;

	sub_roid = (roid & 0xFFFFFFFF00000000ULL) | 1;

	return 0;
}
