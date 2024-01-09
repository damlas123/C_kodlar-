#include <stdio.h>
#include <stdlib.h>

 void evenorodd(int d){
 	if(d%2==0){
 		printf("it is even number");
 		}
 		else{
 			printf("it is odd number");
		 }
 }
int main(int argc, char *argv[]) {
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	evenorodd(number);
	return 0;
}
