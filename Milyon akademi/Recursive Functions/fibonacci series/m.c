#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if (n==0){
	return 1;
	}
	else if(n==1){
		return 1;
	}
	else
	return fibonacci(n-1)+fibonacci(n-2);
}





int main(int argc, char *argv[]) {
	int n,i;
	printf("enter the length of series:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\n",fibonacci(i));
	}
	return 0;
}
