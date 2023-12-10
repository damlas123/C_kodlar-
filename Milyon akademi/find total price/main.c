#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int p,v;
	printf("enter the price of this product:");
	scanf("%d",&p);
	v=p*18/100;
	p=p+v;
	printf("the total price of hts product:%d",p);
	return 0;
}
