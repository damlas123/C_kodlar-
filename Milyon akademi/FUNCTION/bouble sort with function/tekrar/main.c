#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*void booblesor(int ar[],int a);
int main(int argc, char *argv[]) {
	int n,i;
	srand(time(0));
	printf("how many element do you want to create :");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		array[i]=rand()%100;
		printf("%d\n",array[i]);
	}
	booblesor(array,n);
	return 0;
}
void booblesor(int ar[],int a){
	int i,j,temp;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-1-i;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];;
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	for(i=0;i<a;i++){
		printf("%d\n",ar[i]);
	}
}*/
void addnumber(int ar[],int n,int a,int b);
int main(){
	int a,b,i,d;
	printf("enter number of element :");
	scanf("%d",&a);
	srand(time(0));
	int array[a];
	for(i=0;i<a;i++){
		array[i]=rand()%100;
		printf("%d\n",array[i]);
	}
	printf("which number do you want to add:");
	scanf("%d",&b);
	printf("which sequent number do you want to add:");
	scanf("%d",&d);
	addnumber(array,a,b,d);
	return 0;
}
 void addnumber(int ar[],int n, int a, int b){
 	int i,temp;
 	if(n+1>=b){
 		for(i=n;i>b;i--){
 			ar[i+1]=ar[i];
		 }
	 }
	 ar[b-1]=a;
	 for(i=0;i<=n;i++){
	 	printf("%d\n",ar[i]);
	 }
 	
 }
