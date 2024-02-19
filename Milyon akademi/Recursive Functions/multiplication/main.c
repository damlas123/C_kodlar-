#include <stdio.h>
#include <stdlib.h>
int mult(int a){
	if(a!=1){
		return a*mult(a-1);
	}
	else{
		return a;
	}
}

int main(int argc, char *argv[]) {
	int n;
	printf("enter the last value:");
	scanf("%d",&n);
	printf("%d",mult(n));
	return 0;
}
