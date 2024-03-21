#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("enter size of array:");
	scanf("%d",&n);
	int i;
	int *p;
	p=(int *)malloc(n*sizeof(n));
	if(p==NULL){
		printf("the are is not created");
	}
	else{
		printf("enter the elements of array:");
		for(i=0;i<n;i++){
			scanf("%d",&p[i]);
		}
		for(i=0;i<n;i++){
			printf("%d\t",p[i]);
			printf("%p\n",p[i]);
		}
	}
	return 0;
}
