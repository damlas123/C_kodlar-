#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int *ad1,*ad2,*ad;
	int n=10,p=20;
	ad1=&n;
	ad2=&p;
	printf("the value of ad1 is:%d\n",*ad1);
	printf("the addres of ad1 is:%d\n",ad1);
	*ad1=*ad2+2;
	printf("after the addition the value of ad1:%d\n",*ad1);
	printf("after the addition the addres of ad1 is:%d",ad1);
	
	return 0;
}
