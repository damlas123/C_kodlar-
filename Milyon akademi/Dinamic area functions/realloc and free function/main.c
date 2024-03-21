#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int *p;
	p=(int *)calloc(n,sizeof(n));
	if(p==NULL){
	printf("memory can't divided");
	}
	else{
		for(i=0;i<n;i++){
			p[i]=i+1;
		}
		for(i=0;i<n;i++){
		
		printf("%d\n",p[i]);
	}
		n=10;
		p=realloc(p,n*sizeof(n));
		for(i=5;i<n;i++){
			p[i]=i+1;
		}
		for(i=5;i<n;i++){
			printf("%d\n",p[i]);
		}
		free(p);
	}
	return 0;
}
