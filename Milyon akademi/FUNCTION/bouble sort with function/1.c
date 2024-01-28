#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void booble(int array[],int a){
	int i,temp,j;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
		
		if(array[j]>array[j+1]){
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
		}
		printf("\n");
		for(i=0;i<a;i++){
			printf("%d\t",array[i]);
		}
	}
}
int main(int argc, char *argv[]) {
	int b;
	printf("enter number of element:");
	scanf("%d",&b);
	int ar[b],i;
	srand(time(0));
	for(i=0;i<b;i++){
		ar[i]=rand()%100;
		printf("%d\t",ar[i]);
	}
	booble(ar,b);
		return 0;
}
