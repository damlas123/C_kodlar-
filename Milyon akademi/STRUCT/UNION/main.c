#include <stdio.h>
#include <stdlib.h>

union test{
	int x;
	int y;
};

int main(int argc, char *argv[]) {
	union test t;
	t.x=15;
	
	printf("%d\t\n",t.y);
	printf("the area they hold:%d\n",sizeof(t));
	t.y=21;
	printf("%d\t",t.y);
	return 0;
}
