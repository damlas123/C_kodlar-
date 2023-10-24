#include <stdio.h>
#include <stdlib.h>

int main() {
	int price,passenger,time,class;
	printf("choosing time should be like that : morning:1\nafternoon:2\nnight:3\n");
	printf("the business class:1\nthe economy class:2\n");
	printf("please enter time variable:");
	scanf("%d",&time);
	printf("choose your class:");
	scanf("%d",&class);
	printf("passenger number:");
	scanf("%d",&passenger);
	
	if(time==1){
		if(class==1){
			price=150*passenger;
			printf("your price:%d\n",price);
		}
		else
		price=100*passenger;
		printf("your price:%d\n",price);
	}
	else if (time==2){
		if(class==1){
			price=120*passenger;
		printf("your price:%d\n",price);
		}
		else{
			price=90*passenger;
			printf("your price:%d\n",price);
		}
	}
	else
	{
		if(class==1)
		{
			price=140*passenger;
			printf("your price:%d\n",price);
		}
		else{
			price=70*passenger;
			printf("your price:%d\n",price);
		}
	}
		if(passenger>2)
		{
		price=price*0.85;
		printf("your new price:%d\n",price);
	}
	
	

	printf("\nthanks for choosing us");
	return 0;
}
