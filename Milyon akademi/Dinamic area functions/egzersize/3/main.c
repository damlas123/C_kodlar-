#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	srand(time(0));
	printf("enter the size of array:");
	int i,n;
	scanf("%d",&n);
	int *p;
	p=(int *)calloc(n,sizeof(n));
	for(i=0;i<n;i++){
	   p[i]	=rand()%100;
	}
	printf("the array created like that:\n");
	for(i=0;i<n;i++){
		printf("%d\n",p[i]);
	}
	printf("the square of these number is:\n");
	for(i=0;i<n;i++){
		printf("%d^2 is= %d\n",p[i],p[i]*p[i]);
	}
	return 0;
}
