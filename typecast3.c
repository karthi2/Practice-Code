#include <stdio.h>

int main() {
	unsigned int hash;

	unsigned int bits = 8;
	unsigned int ifh = 4294967295;

	unsigned long multiplier = ifh * 2654435761UL;
	unsigned long hash_mult  = multiplier >> (32 - bits);
	hash = ((unsigned int)(multiplier)) >> (32 - bits);
	printf("%d, %lu\n", hash, hash_mult);

	hash = ((unsigned int)((unsigned long) ifh * 2654435761UL)) >> (32 - bits);
	printf("%d\n", hash);

	return 0;
}
