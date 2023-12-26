#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int mat[3][2],mat1[3][2],sum[3][2];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			sum[i][j]=mat[i][j]+mat1[i][j];
			printf("%d ",sum[i][j]);
			if(j==1)
			printf("\n");
		}
	}
	return 0;
}
