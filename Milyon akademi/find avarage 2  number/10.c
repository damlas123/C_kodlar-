#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b;
	printf("enter 2 number:");
	scanf("%d %d",&a,&b);
	int avg;
	avg=(a+b)/2;
	printf("the avarage is :%d",avg);
	return 0;
}
