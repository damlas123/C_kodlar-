#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b,c;
	printf("enter your number:");
	scanf("%d",a);
	
    b=a/10;
    c=a%10;
    
	printf("the tens and ones digits of a: %d %d ",b,c);
	return 0;
}
