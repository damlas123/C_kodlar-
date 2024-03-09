#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,max;
	int min;
	printf("enter size of arrau:");
	scanf("%d",&n);
	printf("enter your array element:");
	int array[n];
	int *p;
	p=array;
	int i;

	for(i=0;i<n;i++){
		scanf("%d",p+i);
		}
	}
max =min=*p;
		
	for(i=1;i<n;i++){
			if(max<*(p+i)){
			max=*(p+i);
		}
		if(min>*(p+i)){
			min=*(p+i);
	}
	printf("%d is the max value",max);
	printf("%d is the min value",min);
	
	
	return 0;
}
