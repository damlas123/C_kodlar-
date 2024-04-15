#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter %d %d word",i+1,j+1);
			scanf(" %c",&array[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%c\t",array[i][j]);
		}
		printf("\n");
	}
	printf("enter how money character you enter:");
	int n;
	scanf("%d",&n);
	char *ar,a=0;
	ar=(char *)malloc(n*sizeof(char));
	printf("enter password:");
	for(i=0;i<n;i++){
		scanf(" %c",&ar[i]);
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(array[i][j]==ar[a]){
				printf("%d\t",10*(1+j)+(i+1));
				a++;
				if(a>n){
					break;
				}
			}
			
		}
	}
	return 0;
}
