#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
/*	int m[3][4];
	printf("enter array elements:");
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&m[i][j]);
		}
	}
	printf("your array created like that:\n");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}*/
	int **p;
	p=(int **)malloc(3*sizeof(int *));
	int i,j;
	for(i=0;i<3;i++){
		p[i]=(int)malloc(4*sizeof(int));
		for(j=0;j<4;j++){
			p[i][j]=10*i+j+1;
			printf("%4d",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
