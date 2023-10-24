#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("enter b:");
	scanf("%d",&b);
	printf("enter a:");
	scanf("%d",&a);
	printf("enter c:");
	scanf("%d",&c);
	if(a <b && b<c)
	{
		printf("a<b<c");
	}
	else if (b<c && c<a)
	{
		printf("b<c<a");
	}
	else if(c<a && a<b)
	{
		printf("c<a<b");
	}
	else if (b<a && a<c)
	{
		printf("b<a<c");
	}
	else
	{
		printf("c<b<a");
	}
	
	return 0;
}
