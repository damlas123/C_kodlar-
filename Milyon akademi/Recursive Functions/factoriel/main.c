#include <stdio.h>
#include <stdlib.h>
int fac(int n){
	if(n==1){
		return 1;
	}
	else{
		return n*fac(n-1);
	}
}

int main(int argc, char *argv[]) {
	
	
	int i;
	printf("enter a number:");
	scanf("%d",&i);
	printf("the factoriel of %d is:%d",i,fac(i));
	return 0;
}
