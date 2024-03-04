#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number1,number2;
	printf("enter 2 numbers:");
	scanf("%d%d",&number1,&number2);
	int *num,*num2;
	num=&number1;
	num2=&number2;
	int temp;
	printf("before the changing number:%d is located in %d\n%d is located %d",*num,&number1,*num2,&number2);
	temp=*num;
	*num=*num2;
	*num2;temp;
	printf("\nafter changing number :%d is located %d\n %d is located in %d",*num,&number1,*num2,&number2);
	return 0;
}
