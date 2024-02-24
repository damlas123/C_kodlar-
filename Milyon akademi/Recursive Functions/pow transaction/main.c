#include <stdio.h>
#include <stdlib.h>

int po(int n,int a){
	int i;
	if(a==0){
	 i=1;
	}
	else{
	i=n*po(n,a-1);
	}
	return i;
}

int main(int argc, char *argv[]) {
	int number,ponumber;
	printf("enter the number:");
	scanf("%d",&number);
	printf("enter the pow number:");
	scanf("%d",&ponumber);
	printf("%d^%d is:%d",number,ponumber,po(number,ponumber));
	
	return 0;
}
