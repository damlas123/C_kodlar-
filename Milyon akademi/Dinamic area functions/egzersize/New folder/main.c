#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,m;
	printf("enter the row number:");
	scanf("%d",&n);
	printf("enter the coulomn number:");
	scanf("%d",&m);
	int **matrix;
	matrix=(int **)calloc(n,sizeof(int));
	int i,j;
	printf("enter the number:");
	for(i=0;i<n;i++){
		matrix[i]=(int *)calloc(m,sizeof(int));
		for(j=0;j<m;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("array created like that:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
