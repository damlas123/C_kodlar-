#include <stdio.h>
#include <stdlib.h>
void even(int *a){
	if(*a%2==0){
		printf("number is even \n");
	}
	else("number is odd\n");
}
void odd(int *a){
	if(*a%3==0){
		printf("number can be divided by 3");
	}
	else{
		printf("number can not be divided by 3");
	}
}

int main(int argc, char *argv[]) {
	int n;
	int *p;
	p=&n;
	printf("enter a number:");
	scanf("%d",p);
    even(p);
    odd(p);
	
	return 0;
}

