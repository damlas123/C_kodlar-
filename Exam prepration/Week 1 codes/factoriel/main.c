#include <stdio.h>
#include <stdlib.h>
int factor(int a){
	static int fac=1;
	if(a!=1){
		fac*=a;
		return factor(a-1);
	}
	else{
		return fac;
	}
}
int main(int argc, char *argv[]) {
	int number;
	printf("enter number:");
	scanf("%d",&number);
	printf("the factoriel of %d is %d",number,factor(number));
	return 0;
}
