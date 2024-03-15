#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array 1:");
	scanf("%d",&n);
	int array[n];
	printf("enter first array element:");
	int i;
	int *p;
	p=array;
	for(i=0;i<n;i++){
	  scanf("%d",&array[i]);
	}
	int a;
	printf("enter size of 2.array:");
	scanf("%d",&a);
	int ar[a];
	int *p2;
	p2=ar;
	printf("enter the elements of second array:");
	for(i=0;i<a;i++){
		scanf("%d",&ar[i]);
	}
	printf("after adding second array to first array:");
    i=n;
    for(p=array+n,p2=ar;p2<ar+a;p2++,p++){
    	*(p)=*p2;
	}
	p=array;
    for(i=0;i<a+n;i++){
    	printf("%d\n",*(p+i));
	}
	return 0;
}
