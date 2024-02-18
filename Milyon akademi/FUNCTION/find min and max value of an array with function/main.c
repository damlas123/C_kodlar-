#include <stdio.h>
#include <stdlib.h>
int max(int array[],int n);
int min(int array[],int n);
int main(int argc, char *argv[]) {
	int n;
	printf("enter element number:");
	scanf("%d",&n);
	int ar[n],i;
	for(i=0;i<n;i++){
		printf("enter %d element:",i+1);
		scanf("%d",&ar[i]);
	}
	int m=max(ar,n);
	int m1=min(ar,n);

	printf("the max value is:%d\nthe min value is:%d",m,m1);
		return 0;
}
 int max(int array[],int n){
 	int i,j;
 	int max1=array[0];
 	for(i=0;i<n;i++){
 		for(j=1;j<n;j++){
 			if(array[j]>array[i]){
 				max1=array[j];
			 }
		 }
	 }
 	
 	return max1;
 }
  int min(int array[],int n){
  	int i;
  	int min1=array[0];
  		for(i=1;i<n;i++){
 			if(min1>array[i]){
 				min1=array[i];
			 }
		 }
		 	 return min1;
  }
