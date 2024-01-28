#include <stdio.h>
#include <stdlib.h>

void floyd (int a){
	int i,j;
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
				if(j%2==0){
			printf("0");
		}
		else{
			printf("1");
		}
	
		}
			printf("\n");
	
	}
}
int main(int argc, char *argv[]) {
	int b;
	printf("enter the row number:");
	scanf("%d",&b);
	floyd(b);
	
	return 0;
}
