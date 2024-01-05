#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,a;
	printf("enter row number :");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(a=1;a<=i;a++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	return 0;
}
