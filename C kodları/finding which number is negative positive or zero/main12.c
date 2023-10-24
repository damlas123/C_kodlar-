#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	printf("enter a :");
	scanf("%d",&a);
	if(a>0)
{
	printf("a is a positive number");	
	}
	else if(a<0){
		printf("a is a negative number");
	}
	else 
	{
	 printf("a is zero");
		}	
	
	
		return 0;
}
