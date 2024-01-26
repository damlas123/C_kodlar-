#include <stdio.h>
#include <stdlib.h>
int fac(int n){
	int i=1,f=1;
	while(n>=i){
		f=f*i;
		i++;
	}
	return f;
}
int main(int argc, char *argv[]) {
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	printf("the factoriel is:%d",fac(number));
	return 0;
}
