#include <stdio.h>
#include <stdlib.h>

void oddnumber(int n,int lastvalue){
	if(n<=lastvalue){
		printf("%d\n",n);
		oddnumber(n+2,lastvalue);
		
	}
	
}
int main(int argc, char *argv[]) {
	int number,d;
	printf("enter the last value:");
	scanf("%d",&number);
	if(number%2==1){
		d=number;
	}
	else{
		d=number-1;
	}
	oddnumber(1,d);
	return 0;
}
