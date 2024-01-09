#include <stdio.h>
#include <stdlib.h>
    int pow(int n,int b,int result){
    	int i=1;
    	result=1;
    	for(i=1;i<=b;i++){
    		result*=n;
		}
    	return result;
	}

int main(int argc, char *argv[]) {
	int number,exponent,res;
	printf("enter number:");
	scanf("%d",&number);
	printf("enter exponent:");
	scanf("%d",&exponent);
	printf("%d pow %d is:%d",number,exponent,pow(number,exponent,res));
	return 0;
}
