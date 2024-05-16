#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int n,i,*ptr,sum=0;
printf("enter arrays elements:");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
 if(ptr==NULL){
 	printf("the storage is not enough\n");
 }
 else{
 	printf("enter array elements:");
 	for(i=0;i<n;i++){
 		scanf("%d",ptr+i);
 		sum+=*(ptr+i);
	 }

 
 }
 printf("the sum of array elements is:%d",sum);
 free(ptr);
 getchar();
 getchar();
	return 0;
}
