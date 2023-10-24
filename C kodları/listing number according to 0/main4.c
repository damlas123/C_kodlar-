#include <stdio.h>
#include <stdlib.h>


int main() {
	int number;
	printf("enter number:");
	scanf("%d",&number);
	if(number>0)
	{
	printf("it is positive number");
	}
	if(number<0)
	{ 
		printf("it is negative number");
	}
	if(number=0)
	{
		printf("it is 0");
	}
	return 0;
}
