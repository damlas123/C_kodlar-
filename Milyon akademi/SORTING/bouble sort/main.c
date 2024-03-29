#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int i,j,temp,n;
	printf("enter elements number:");
	scanf("%d",&n);
	int array[n];
	srand(time(0));
	for(i=0;i<n;i++){
		array[i]=rand()%100;
	}
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	printf("\nafter sorting:\n");
	for(i=0;i<n;i++){
		for(j=1;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	
	printf("after sorting:");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	return 0;
}
