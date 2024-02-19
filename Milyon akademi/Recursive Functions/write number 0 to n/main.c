#include <stdio.h>
#include <stdlib.h>
void counter(int a){
	if(a!=0){
		printf("%d\n",a);
		
	counter(a-1);
		
	}
	else
	printf("%d",a);
}

int main(int argc, char *argv[]) { 
int n; 
printf("enter the last value:");
scanf("%d",&n);
counter(n);
	return 0;
}
