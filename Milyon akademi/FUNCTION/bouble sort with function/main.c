#include <stdio.h>
#include <stdlib.h>
void baklavaust(int n){
	int i,j,a=1,temp=n;
	for(i=1;i<=n;i++){
		while(a<=temp){
			printf(" ");
			a++;
		}
		a=1;
		temp--;
		for(j=1;j<=i;j++){
			printf("* ");
		}
	printf("\n");
	
	}
}
int main() {
	int row;
	ptinyf("enter the row:");
	scanf("%d",&row);
	baklavaust(row);
	return 0;
}
