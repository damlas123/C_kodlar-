#include <stdio.h>
#include <stdlib.h>

union memory{
	int x;
	int y;
}usage;
int main(int argc, char *argv[]) {
	int *X,*Y;
	usage.x=100;
	X=&usage.x;
	printf("the number:%d and the adress:%d\n",usage.x,X);
	usage.y=150;
	Y=&usage.y;
	printf("the number:%d and the adress:%d",usage.y,Y);
	return 0;
}
