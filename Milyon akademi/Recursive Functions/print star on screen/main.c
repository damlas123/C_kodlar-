#include <stdio.h>
#include <stdlib.h>
void star(int n){
	if(n>0){
		int i;
		for(i=1;i<=n;i++){
			printf("*");
		}
		printf("\n");
		star(n-1);
	}
	else{
		exit;
	}
}
int main(int argc, char *argv[]) {
	int no;
	printf("enter number:");
	scanf("%d",&no);
	star(no);
	return 0;
}
