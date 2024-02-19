#include <stdio.h>
#include <stdlib.h>
int add(int a){
	if(a!=0){
		return a+add(a-1);
		
	}
	else
	return a;
}

int main(int argc, char *argv[]) {
	int n;
	printf("the last value:%d");
	scanf("%d",&n);
	printf("addition is:%d",add(n));
	return 0;
}
