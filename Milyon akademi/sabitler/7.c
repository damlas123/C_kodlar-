#include <stdio.h>
#include <stdlib.h>
//#define PI 3.14 main üstünde tanýmlamak istersek böyle tanýmlarýz büyük harflerle ve ; olmadan yazýlýr

int main(int argc, char *argv[]) {
	const PI=3.1416; // ya da böyle const yazýp kullanabiliriz
	float alan,r;
	printf("enter a radius:");
	scanf("%f",&r);
	alan=PI*r*r;
	printf("area:%.2f",alan);
	return 0;
}
