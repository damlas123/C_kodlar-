#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int array[n];
	int *p;
	p=array;
	printf("enter your array elements:");
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	int d,flate=0;
	printf("enter which value do you look for: ");
	scanf("%d",&d);
	for(i=0;i<n;i++){
		if(d==*(p+i)){
			printf("%d. element is your value ",i+1);
			flate =1;
			break;
		}
	}
	if(flate ==0){
		printf("there is no element like you enter");
	}
	return 0;
}
