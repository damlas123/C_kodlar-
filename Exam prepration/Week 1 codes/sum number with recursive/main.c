#include <stdio.h>
#include <stdlib.h>

int sum (int a){
	static int sum1=0;
	if(a!=0){
		sum1+=a;
		return sum(a-1);
	}
	else{
		return sum1;
	}
}
int main(int argc, char *argv[]) {
	int n;
	printf("enter last number:");
	scanf("%d",&n);
    int summation=	sum(n);
    printf("the sum of number between 1 to  %d = %d",n,summation);
    
	return 0;
}
