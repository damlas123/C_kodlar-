#include <stdio.h>
#include <stdlib.h>
int po(int i){
	int n;
	if(i==0){
		n=1;
	}
	else{
		n=2*po(i-1);
	}
	return n;
}

int main(int argc, char *argv[]) {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("2^%d is:%d",n,po(n));
	return 0;
}
