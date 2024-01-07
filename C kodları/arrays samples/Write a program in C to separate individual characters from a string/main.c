#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char dizi[50];
	printf("enter your text:");
	fgets(dizi,sizeof(dizi),stdin);
	int i=0;
	while(dizi[i]){
	   printf("%c\t",dizi[i]);
	i++;
	}
	return 0;
}
