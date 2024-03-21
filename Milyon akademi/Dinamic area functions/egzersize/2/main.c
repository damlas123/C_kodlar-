#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int n,i;
	int *p;
	printf("enter array size:");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	printf("the array created like that:\n");
	for(i=0;i<n;i++){
		printf("%d\n",p[i]);
	}
	return 0;
}
