#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int l1,l2,a,p;
	printf("enter the lenght of rectungular:");
	scanf("%d%d",&l1,&l2);
	a=l1*l2;
	p=(l1+l2)*2;
	printf("the area of this rectangular:%d\n",a);
	printf("the perimeter fo this rectangular is:%d",p);

	return 0;
}
