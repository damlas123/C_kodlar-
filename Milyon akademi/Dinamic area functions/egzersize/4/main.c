#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int *p1,*p2;
	p1=(int *)malloc(sizeof(int));
	p2=(int *)malloc(sizeof(int));
	
	printf("enter number:");
	scanf("%d",&(*p1));
	printf("enter number:");
	scanf("%d",&(*p2));
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("%d is the new number one\n",*p1);
	printf("%d i the new number 2",*p2);
	return 0;
}
