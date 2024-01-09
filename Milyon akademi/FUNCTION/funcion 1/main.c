#include <stdio.h>
#include <stdlib.h>

   int evenorodd (int d){
   	if(d%2==0){
   		return 1;
	   }
    else{
    	return 0;
    	
	}
   }
int main(int argc, char *argv[]) {
	int result,number;
	printf("enter a number:");
	scanf("%d",&number);
	result=evenorodd(number);
	if(result == 1){
		printf("number is even");
	}
	else{
		printf("the number is odd");
	}
	return 0;
}
