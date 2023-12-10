#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
	int a,b,h;
	printf("enter the lenght of a side:");
	scanf("%d",&a);
	printf("enter the length of other side:");
	scanf("%d",&b);
	h=sqrt(a*a+b*b);
	printf("the hyptotenus of this triangle is :%d",h);
	
	
	
	
	
		return 0;
}
