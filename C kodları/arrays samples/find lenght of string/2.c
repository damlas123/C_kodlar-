#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char dizi[50];
	printf("enter a text:");
	int i=0;
	fgets(dizi,sizeof(dizi),stdin);
	while(dizi[i]){
		i++;
	}
	printf("the lenght of your array is:%d",i);
	return 0;
}
