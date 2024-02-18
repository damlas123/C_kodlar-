#include <stdio.h>
#include <stdlib.h>
 void ust(int n);
 void alt(int n);
int main(int argc, char *argv[]) {
	int number;
	printf("enter the row number:");
	scanf("%d",&number);
	printf("\n\n\n");
	ust(number);
	alt(number);
	return 0;
}
 void ust(int n){
 	int i,j,temp=n;
 	for (i=n;i>0;i--){
 			 for(j=1;j<=n-i;j++){
		 	printf(" ");
		 }
 		for(j=1;j<=2*i-1;j++){
 			printf("*");
		 }
		 printf("\n");
	
	 }
 }
 void alt(int n){
 	int i,j;
 	for(i=1;i<=n;i++){
 			for(j=n;j>i;j--){
			printf(" ");
		}
 		for(j=1;j<=2*i-1;j++){
 			printf("*");
		 }
	printf("\n");
	 }
 	
 }
