#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int array[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int *p;
	p=array;
	printf("the even number in array:");
	for(p=array;p<array+16;p++){
		if(*p%2==0){
			printf("%4d\t",*p);
		}
	}
	
	printf("\nthe odd number in array:");
	for(p=array;p<array+16;p++){
		if(*p%2!=0){
			printf("%4d",*p);
		}
	}
	return 0;
}
