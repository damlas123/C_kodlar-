#include <stdio.h>
#include <stdlib.h>
#define n 5
void bastirma(int array[n][n]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
}
int simetrik(int array[n][n],int *deger){
	*deger=1;
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
				if(array[i][j]!=array[i][j])
				{
					*deger=0;
				}
		
		}
	}
	return *deger;
}
int diogonal (int array[n][n],int *a){
	int i,j;
	*a=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				if(array[i][j]!=0){
					*a=0;
				}
			}
		}
	}
	return *a;
}
int main(int argc, char *argv[]) {
	int matrix[n][n]={
	  {2,0,0,0,0},
	  {0,6,0,0,0},
	  {0,0,2,0,0},
	  {0,0,0,7,0},
	  {0,0,0,0,4},
	};
	int d;
	int e;
	bastirma(matrix);
	simetrik(matrix,&d);
	diogonal(matrix,&e);
	if(d==1){
		printf("bu matrix simetriktir\n");
	}
	else{
		printf("bu matrix simetrik degildir");
	}
	if(e){
		printf("bu matrix diogonaldir");
	}
	else{
		printf("bu matrix diogonal degildir");
	}
	return 0;
}
