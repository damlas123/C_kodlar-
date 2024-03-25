#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter how many number entered:");
	scanf("%d",&n);
	int sum=0,i,avg=0;
	int *p;
	p=(int *)calloc(n,sizeof(int));
	printf("enter numbers:");
	for(i=0;i<n;i++){
		scanf("%d",p+i);
		sum+=p[i];
	}
	
	printf("the sum of number is:%d\n",sum);
	printf("the avarage is :%d",sum/n);

	return 0;
}
