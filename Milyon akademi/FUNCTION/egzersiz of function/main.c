#include <stdio.h>
#include <stdlib.h>
int  multiplo2(int number){
	int l;
	if(number % 2 ==0){
		return l=1;
	}
	else{
		return l=0;
	}
}
int multiplo3(int number){
	int p;
	if(number%3==0){
		return p=1;
	}
	else{
		return p=0;
	}
}
void multiplo6(int b,int d){
	if(d==1 && b==1){
		printf("the number is even and multiple of 6 and 3 ");
	}
	else if(d==1 && b==0){
		printf("the number is odd and multiple of 3");
	}
    else if(b==1 && d==0){
    	printf("the number is even but not multiplo of 3 and 6");
	}
	else{
		printf("the number neither even nor multiplo of 3 and 6");
	}
}

int main(int argc, char *argv[]) {
	printf("enter a number:");
	int n;
	scanf("%d",&n);
	int e,s;
	e=multiplo2(n);
	s=multiplo3(n);
	multiplo6(e,s);
	return 0;
}
