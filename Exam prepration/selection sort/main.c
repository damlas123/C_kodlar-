#include <stdio.h>
#include <stdlib.h>

void selection_sort(int [],int);
int main(int argc, char *argv[]) {
	int n,i;
	printf("enter array element number:");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	selection_sort(array,n);
	printf("selection sort\n");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	return 0;
}

void selection_sort(int a[],int k){
	int i=0,j,temp;
for(i=0;i<k;i++){
	for(j=i+1;j<k-1;j++){
	
		if(a[j]>a[i]){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	}
}
