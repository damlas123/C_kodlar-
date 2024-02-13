#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void add(int ar[],int value,int size,int sequence);

int main(int argc, char *argv[]) {
	int i,v,s,seq,n;
	printf("enter element number:");
	scanf("%d",&n);
	srand(time(0));
	int array[n];
	for(i=0;i<n;i++){
		array[i]=rand()%100;
		printf("%d\n",array[i]);
	}
	printf("enter a value:");
	scanf("%d",&v);
	printf("enter the sequence of new value:");
	scanf("%d",&seq);
	add(array,v,n,seq);
	
		return 0;
}
 void add(int ar[],int value,int size,int sequence){
 	int i;
 	if(sequence<=size+1){
 		for(i=size;i>=3sequence-1;i--){
 			ar[i+1]=ar[i];
		 }
		 ar[sequence-1]=value;
		for(i=0;i<size+1;i++){
			printf("%d\n",ar[i]);
		}
 }
 else{
 	 printf("you enter higher number than the size of array");
 }
}

