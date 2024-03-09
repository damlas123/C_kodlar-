#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter the size of your element:");
	scanf("%d",&n);
	int array[n];
	int *p;
	p=array;
	int i;
	printf("enter the element of your array:");
	for(i=0;i<n;i++){
		scanf("%d",p);
		p++;
	}
	printf("the array created like that:");
	p=array;
	for(i=0;i<n;i++){
		printf("%d\t",*p);
	p++;
	}
	return 0;
}
