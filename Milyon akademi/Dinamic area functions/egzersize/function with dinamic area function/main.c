#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void creat_array(int num,int *p1);
void sorting(int num,int *p1);
void maximum(int num,int *p1);
int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int *p;
	p=(int *)malloc(n*sizeof(int));
 creat_array(n,p);
 sorting(n,p);
maximum(n,p);
	return 0;
}
 void creat_array(int num,int *p1){
 	srand(time(0));
 	int i;
 	for(i=0;i<num;i++){
 		p1[i]=rand()%100;
 		printf("%d\t",p1[i]);
	 }	
 }
 void sorting(int num,int *p1){
 	printf("\nthe sorting array:\n");
 	int i,j,temp,temp2;

 	for(i=0;i<num;i++){
 		for(j=1;j<num-i-1;j++){
 			if((p1[j])>(p1[j+1])){
 				temp=(p1[j]);
				(p1[j])=(p1[j+1]);
				(p1[j+1])=temp;
			 }
		 }
	 }
	 for(i=0;i<num;i++){
	 	printf("%d\t",p1[i]);
	 }
 }
 void maximum(int num,int *p1){
 	printf("\nthe maximum number is:%d",*(p1+num-1));
 }
