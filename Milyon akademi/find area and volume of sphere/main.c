#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main(int argc, char *argv[]) {
	int r,a,v;
	printf("enter the radius:");
	scanf("%d",&r);
	a=(4*PI*r*r)/3;
	v=(4*PI*r*r*r)/3;
	printf("the area of sphere:%d\n",a);
	printf("the volume of sphere:%d",v);
	
	return 0;
}
