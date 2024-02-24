#include <stdio.h>
#include <stdlib.h>
void list(){
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	if(number==0){
		exit(0);
	}
	else{
		list();
	}
	
}
int main(int argc, char *argv[]) {
	list();
	return 0;
}
