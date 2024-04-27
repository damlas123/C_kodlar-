#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char name[10];
	float weight;
	char shape[10];
	int quantity;
	int price;
}fruit;
typedef struct{
	fruit f1;
	fruit f2;
}basket;
void fruit_enter(fruit *a){
	printf("enter fruit name:");
	scanf("%s",a->name);
	printf("ener weight:");
	scanf("%f",&a->weight);
	printf("enter fruit shape:");
	scanf("%s",a->shape);
	printf("enter quantitty:");
	scanf("%d",&a->quantity);
	printf("enter price:");
	scanf("%d",&a->price);
}
int calculate(fruit *a){
	int sum=0;
	if(strcmp(a->shape,"round")==0){
		if(a->weight>=200.0){
			sum=3+((a->price*2)*a->weight);
		}
		else{
			sum=2*a->price*a->weight*a->quantity;
		}
	}
	else{
		if(a->weight>=200.0){
			sum=(a->weight*a->price*a->quantity)+3;
		}
		else{
			sum=a->weight*a->price*a->quantity;
		}
	}
	return sum;
}
int main(int argc, char *argv[]) {
	printf("*******************WELCOME TO THE GREENGROCER***************\n");
    fruit fru[2];
    int i;
    for(i=0;i<2;i++){
    	fruit_enter(&fru[i]);
	}
	
	int total=0;
	
	for(i=0;i<2;i++){
		total+=calculate(&fru[i]);
	}
	printf("\n*******************TOTAL*********************\n");

		printf("%d $",total);

	
	return 0;
}
