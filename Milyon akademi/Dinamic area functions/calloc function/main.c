#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int *p;
	int i,n;
	printf("enter the size of arrray:");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	if(p==NULL){
		printf("the area can not created");
	}
	else{
		printf("enter elements:");
		for(i=0;i<n;i++){
			scanf("%d",&p[i]);
		}
		for(i=0;i<n;i++){
			printf("%d:%d\t",i+1,p[i]);
			printf("%p\n",p[i]);
		}
	}
	return 0;
}
