#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n],*p;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",*(p+i));
	}
	int a1,a2;
	printf("enter which elements number do you change:");
	scanf("%d %d",&a1,&a2);
	int temp;
	for(i=0;i<n;i++){
		if(i==a1){
			temp=*(p + i);
			*(p+i)= *(p + a2);
			*(p + a2)= temp;
		}
	}
	for(i<0;i<n;i++){
		printf("%d",*(p+i));
	}
	
	
	return 0;
}
