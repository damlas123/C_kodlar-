#include <stdio.h>
#include <stdlib.h>
void baklava(int n){
	int i,j,a=1,temp=n;
	for(i=1;i<=n;i++){
		while(a<temp){
				printf(" ");
				a++;
		}
		a=1;temp--;
		for(j=1;j<=i;j++){
				printf("*");
				printf(" ");
		
		}
		printf("\n");
	}

}
void baklavalt(int n){
	int i,j,temp=1,a=1,b=n;
	
		for(i=1;i<=b;i++){
		    while(a<=temp){
				printf(" ");
				a++;
			}
			a=1;
			temp++;
		for(j=1;j<=n-1;j++){
		
			printf("*");
			printf(" ");
	
	
		
			}
			printf("\n"); 
			n--;
		}
	
	}

int main(int argc, char *argv[]) {
	int a;
	printf("enter the row number:");
	scanf("%d",&a);
	baklava(a);
	baklavalt(a);
	return 0;
}

