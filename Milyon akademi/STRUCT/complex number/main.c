#include <stdio.h>
#include <stdlib.h>

struct number{
	float a,b;
};
int main(int argc, char *argv[]) {
	char oper;
	printf("enter operator:");
	scanf("%c",&oper);
	struct number num1,sonuc;
	printf("enter first number:");
	scanf("%f %f",&num1.a,&num1.b);
	struct number num2;
	printf("enter second number:");
	scanf("%f%f",&num2.a,&num2.b);
	if(oper=='+'){
		sonuc.a=num1.a+num2.a;
		sonuc.b=num1.b+num2.b;
		printf("%f + %.2f i is the sum",sonuc.a,sonuc.b);
	}
	else{
		sonuc.a=num1.a-num2.a;
		sonuc.b=num1.b-num2.b;
		if(sonuc.b>=0)
{
	printf("%f + %.2f i is the result",sonuc.a,sonuc.b);
	}
	else
	{
		printf("%f %.2f i is the result",sonuc.a,sonuc.b);
		}	}
	
	return 0;
}
