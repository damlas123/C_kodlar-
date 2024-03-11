#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n];
	int *p;
	p=array;
	printf("enter elements:");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	int max,min;
	max=*array;
	min=*array;
	for(i=1;i<n;i++){
		if(*(p+i)>max){
			max=*(p+i);
		}
		if(*(p+i)<min){
			min=*(p+i);
		}
	}
	printf("the max value:%d\n",max);
	printf("the min valuue:%d",min);
	return 0;
}
