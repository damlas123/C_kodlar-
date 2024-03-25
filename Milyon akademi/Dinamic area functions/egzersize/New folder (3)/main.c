#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,m;
	printf("enter row number:");
	scanf("%d",&n);
	printf("enter coulomn number");
	scanf("%d",&m);
	int **matrix;
	matrix=(int **)calloc(n,sizeof(int));
	int i,j,sum=0;
	for(i=0;i<n;i++){
		matrix[i]=(int *)calloc(m,sizeof(int));
		for(j=0;j<m;j++)
    {
	  scanf("%d",&(matrix[i][j]));
	 
	}
}
	printf("\n");
	printf("the matrix created like that:\n");
	for(i=0;i<n;i++)
{
	for(j=0;j<m;j++){
		printf("%d\t",matrix[i][j]);
		 if(i==j){
	  	sum+=matrix[i][j];
	  }
	}
	}	
	
		printf("\n%d is the sum",sum);
	return 0;
}
