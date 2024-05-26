#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *p;
	int stdno;
	int i=0,size=0,temp;
	printf("enter student number:");
	scanf("%d",&stdno);
	temp=stdno;

	while(temp!=0){
	size++;
		temp/=10;
	
	}
	p=(int *)malloc(size*sizeof(int));
	while(stdno!=0){
		p[i]=stdno%2;
		stdno/=2;
		i++;
	}
	p[i]=1;
	while(i>=0){
		printf("%d",p[i]);
		i--;
	}
	return 0;
}
