#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float s;
	do{
		printf("enter a number:");
		scanf("%f",&s);
		if(s<0)
		{
			printf("please enter positive number:");
			continue;
		}
		printf("the squarate of your number is:%f\n",sqrt(s));
		if(s==0){
			break;
		}
	}while(s);
	return 0;
}
