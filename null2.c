#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct attribute {
	struct attribute *first;
	struct attribute *last;
};

typedef struct im_rd_st_* im_rd_td;
struct im_rd_st_ {
	int a;
	int b;
	struct attribute attrs;
	int mem_usage;
};

void list_init(struct attribute *attrs) {
	attrs->first = NULL;
	attrs->last = NULL;
}

int main () {
	im_rd_td rd = (im_rd_td) malloc (sizeof(struct im_rd_st_));

	memset(rd, 0, sizeof(struct im_rd_st_));
	rd->a = 10;
	rd->b = 20;
	rd->mem_usage = 0;

	list_init(&(rd->attrs));
	return 0;
}
