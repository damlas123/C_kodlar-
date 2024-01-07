#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	int i,j,temp,n;
	printf("enter length of your array:");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++){
		dizi[i]=rand()%100;
	}
	printf("your array is created like that:\n");
	for(i=0;i<n;i++){
		printf("%d\t",dizi[i]);
	}
	for(i=1;i<n;i++){
		j=i;
		
			while(j>0 && dizi[j]<dizi[j-1]){
				temp=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
				j--;
			}
	}
	printf("\nthe insertion sort of your array is like that:\n");
	for(i=0;i<n;i++){
		printf("%d\t",dizi[i]);
	}
	return 0;
}
