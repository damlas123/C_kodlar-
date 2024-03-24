#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	printf("enter how many numbers do you sum:");
	scanf("%d",&n);
	int sum=0;
	int  i;
	int *p;
	p=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
		sum+= p[i];
		
	}
	printf("sum:%d",sum);
	return 0;
}
