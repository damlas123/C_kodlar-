#include <stdio.h>
#include <stdlib.h>
int mul(int n1,int b){
	static int sum=0;
	if(b != 0){
	 sum+=n1;
		return mul(n1,b-1);
	}
	else{
		return sum;
	}
}


int main(int argc, char *argv[]) {
	int n,a;
	printf("enter the number :");
	scanf("%d",&n);
	printf("enter the number which multiplacation first number:\n");
	scanf("%d",&a);
	printf("\n%d is the multiplacation result",mul(n,a));
	return 0;
}
