#include <stdio.h>
#include <stdlib.h>

int main() {
	int age,verge;
	verge=18;
	printf("please enter your age:");
	scanf("%d",&age);
	if(age>verge){
		printf("you can get your licence");
	}
	else{
		printf("you can't get your driver licence");
			}
	return 0;
}
