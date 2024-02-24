#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 void sorting(int array[],int n){
 	int i,Temp;
 	if(n>0){
 		for(i=0;i<n;i++){
 				if(array[i]>array[i+1]){
 					Temp=array[i];
 					array[i]=array[i+1];
 					array[i+1]=Temp;
				 }
	}
	 sorting(array,n-1);	 
	 }
 }
int main(int argc, char *argv[]) {
	int n1;
	printf("enter the length of array:");
	scanf("%d",&n1);
	int array1[n1];
	srand(time(0));
	int i=0;
	for(i=0;i<n1;i++){
		array1[i]=rand()%100;
		printf("%d\n",array1[i]);
	}
	sorting(array1,n1-1);
	for(i=0;i<n1;i++){
		printf("%d\n",array1[i]);
	}
	return 0;
}
