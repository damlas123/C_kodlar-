#include <stdio.h>
#include <stdlib.h>
//#define PI 3.14 main �st�nde tan�mlamak istersek b�yle tan�mlar�z b�y�k harflerle ve ; olmadan yaz�l�r

int main(int argc, char *argv[]) {
	const PI=3.1416; // ya da b�yle const yaz�p kullanabiliriz
	float alan,r;
	printf("enter a radius:");
	scanf("%f",&r);
	alan=PI*r*r;
	printf("area:%.2f",alan);
	return 0;
}
