#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

int main(int argc, char *argv[]) {
	int r;
	printf("enter radius:");
	scanf("%d",&r);
	float p,a;
	a=PI*r*r;
	p=PI*2*r;
	printf("the area of this circle:%.2f\n",a);
	printf("the perimeter of this circle:%.2f",p);
	return 0;
}
