#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,j,temp,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n];
	printf("the array created like that:");
	for(i=0;i<n;i++){
		array[i]=rand()%100;
	}
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	for(i=1;i<n;i++){
		j=i;
		while(j>0 && array[j]<array[j-1]){
			temp=array[j];
			array[j]=array[j-1];
			array[j-1]=temp;
			j--;
		}
	}
	printf("\nafter sorting:\n");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	return 0;
}
