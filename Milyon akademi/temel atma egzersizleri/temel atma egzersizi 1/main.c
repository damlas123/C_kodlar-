#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	// ax^2+bx+c i�in kullan�c�dan de�er al�p i�lemin sonucunbu ekrana bas�n
	int sum=0,x,a,b,c;
	printf("enter x value:");
	scanf("%d",&x);
	printf("enter the coefficient of x^2:");
	scanf("%d",&a);
	printf("enter coefficient of x:");
	scanf("%d",&b);
	printf("enter coefficient of x^^0:");
	scanf("%d",&c);
	sum=(a*x*x)+(b*x)+c;
	printf("the result is:%d",sum);



	return 0;
}
