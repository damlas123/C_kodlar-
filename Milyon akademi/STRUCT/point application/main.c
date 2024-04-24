#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	struct point{
		int abs;
		int ord;
	};
	struct point y;
	y.abs=3;
	y.ord=2;
	printf("%d\t%d",y.abs,y.ord);
	return 0;
}
