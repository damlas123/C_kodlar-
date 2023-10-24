#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a,b,c;
	printf(" a,b,c must be different each other\n");
	printf(" enter a number:");
	scanf("%d",&a);
	printf("enter b number:");
	scanf("%d",&b);
	printf("enter c number:");
	scanf("%d",&c);
	if(a>b && a>c  && a!=b && a!=c && b!=c)
	{
		printf("a is the highest number");
	}
	else if (b>a && b>c && b!=a && b!=c && a!=c)
	{
		printf("b is the highest number");
		}
	else if(c>a && c>b && c!=b && c!=a && a!=b)
{
	printf("c is the highest number");	
	}
	else{
		printf("!!!!!!!!!!!!!!!!!!you entered wrong number please verify your number!!!!!!!!!!!!!!!!!!");
	}
		return 0;
}
