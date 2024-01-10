#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float b,t,l;
	int i;
	printf("enter code for book:0 for basic food:1 luxury:2:");
	scanf("%d",&i);
	switch(i){
		case 0:{
			printf("enter the price of book:");
			scanf("%f",&b);
			b+=(b*0.04);
			printf("the price of book with tax:%f",b);
			break;
		}
		case 1: {
			printf("enter the price of basic food:");
			scanf("%f",&t);
			t+=(t*5.6)/100;
			printf("the price of book with tax:%f",t);
			break;
		}
		case 2:printf("enter the price of luxury:");
			scanf("%f",&l);
			l+=(l*19.6)/10;
			printf("the price of book with tax:%f",l);
	}
	return 0;
}
