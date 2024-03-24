#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int array[n];
	srand(time(0));
	int i,*p,temp;
	p=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		*(p+i)=rand()%100;
		printf("%d\t",*(p+i));
	}
    temp=*(p);
	for(i=1;i<n;i++){
		if(temp>*(p+i)){
			temp=*(p+i);
		}
	}
	printf("the smallest number of array is:%d",temp);
	
	return 0;
}
