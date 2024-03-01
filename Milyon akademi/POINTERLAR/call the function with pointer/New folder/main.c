#include <stdio.h>
#include <stdlib.h>
void change(int ad1,int ad2 ){
	int temp;
	temp=ad1;
	ad1=ad2;
    ad2=temp;
	printf("the first number is:%d the second number:%d",ad1,ad2);
}

int main(int argc, char *argv[]) {
	int a=10,b=20;
	printf("before the calling :%d %d\n",a,b);
	
	change(a,b);
	printf("after the calling :%d %d",a,b);
	return 0;
}
