#include <stdio.h>
#include <stdlib.h>

int main() {
	double rate,vat,price,sum;
	printf("enter price:");
	scanf("%lf",&price);
	printf("enter rate:");
	scanf("%lf",&rate);
	vat=price*rate/100;
	sum=vat+price;
	printf("vat:%lf\nsum:%lf",vat,sum);
	return 0;
}
