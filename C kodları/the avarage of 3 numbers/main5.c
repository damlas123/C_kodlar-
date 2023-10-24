#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1,n2,n3;
	double avarage;
	printf("n1: ");
	scanf("%d",&n1);
	printf("n2: ");
	scanf("%d",&n2);	
	printf("n3: ");
	scanf("%d",&n3);
	
	avarage=(n1+n2+n3)/3;
	printf("avarage:%lf",avarage);
	return 0;
}
