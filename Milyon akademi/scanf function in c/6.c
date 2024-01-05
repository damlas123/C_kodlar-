#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	char k;
	char text[50];
	int n1;
	float n2;
	double n3;
	printf("enter a texture:");
	scanf("%c",&k);
	printf("enter a text:");
	scanf("%s",&text);
	printf("enter a number :");
	scanf("%d",&n1);
	printf("enter another number for float variable:");
	scanf("%f",&n2);
	printf("enter a number for double variable:");
	scanf("%lf",&n3);
	printf("your texture is :%c\n",k);
	printf("your text is :%s\n",text);
	printf("your number in integer variable is :%d\n",n1);
	printf("your number in float integer is :%f\n",n2);
	printf("your number in double integer is : %lf",n3);
	return 0;
}
