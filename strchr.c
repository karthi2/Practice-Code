#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char ifname[64] = "Bundle-Ether10.1005";

	char *bdl_name = "Bundle-Ether10.1005";

	if(strchr(bdl_name, '.') != NULL);
		printf("not bundle");

	if(strchr(ifname, '.') != NULL);
		printf("not bundle");

	return 0;
}
