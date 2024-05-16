#include <stdio.h>
#include <stdlib.h>
int fun(int a){
	if(a!=0){
		printf("%d\n",a);
		return fun(a-1);
	}
	else{
		
		return a;
}    	}

int main(int argc, char *argv[]) {
	int n;
	printf("enter last number:");
	scanf("%d",&n);
	fun(n);
	return 0;
}
