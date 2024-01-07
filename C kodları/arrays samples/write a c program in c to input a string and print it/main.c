#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	printf("enter your first text:");
	char dizi[50],dizi2[50];
	fgets(dizi,sizeof(dizi),stdin);
	printf("enter your second text:");
	fgets(dizi2,sizeof(dizi2),stdin);
	printf("%s is your first text and %s is the your second text",dizi,dizi2);
	return 0;
}
