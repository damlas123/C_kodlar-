#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char dizi[50];
	printf("enter your text:");
	fgets(dizi,sizeof(dizi),stdin);
	printf("%s",strrev(dizi));
	return 0;
}
