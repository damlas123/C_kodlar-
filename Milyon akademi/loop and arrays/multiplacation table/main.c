#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int array[11][11];
	printf("I");
	int i,j;
	for(i=1;i<=10;i++){
		printf("%4d",i);
	}
	printf("\n");
	for(i=1;i<=10;i++){
		printf("----");
	}
	printf("\n");
	for(i=1;i<11;i++){
	
		for(j=1;j<11;j++){
			array[i][j]=i*j;
		}
	}
	for(i=1;i<11;i++){
		printf("%d",i);
		for(j=1;j<11;j++){
			printf("%4d",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
