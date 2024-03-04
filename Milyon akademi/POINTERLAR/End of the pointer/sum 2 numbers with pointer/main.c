#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int p,i;
	printf("enter two numbers:");
	scanf("%d%d",&p,&i);
	int *p1,*i1;
	p1=&p;
	i1=&i;
	printf("%d+%d=%d",*p1,*i1,*p1+*i1);
	return 0;
}
