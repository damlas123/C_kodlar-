#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int n,m;
	printf("enter elements nbumber of first array:");
	scanf("%d",&n);
	printf("enter number of elements of second array:");
	scanf("%d",&m);
	int *p,*p1;
	p=(int *)malloc(n*sizeof(n));
	p1=(int *)malloc(m*sizeof(m));
	int i;
	srand(time(0));
	printf("the first array elements:\n");
	for(i=0;i<n;i++){
		*(p+i)=rand()%100;
		printf("%d\t",*(p+i));
	}
	printf("\nthe second array elements:\n");
	for(i=0;i<m;i++){
		*(p1+i)=rand()%100;
		printf("%d\t",*(p1+i));
	}
	int *p2,counter=0;
	p2=(int *)calloc(n+m,sizeof(int));
	printf("\nafter collect array one adress:\n");
	for(i=0;i<n;i++){
		*(p2+counter)=*(p+i);
		counter++;
	}

	for(i=0;i<m;i++){
		*(p2+counter)=*(p1+i);
		counter++;
	}	
	for(i=0;i<counter;i++){
		printf("%d\t",*(p2+i));
	}
	return 0;
}
