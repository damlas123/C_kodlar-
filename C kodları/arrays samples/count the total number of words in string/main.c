#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char dizi[50];
	printf("enter your text:");
	fgets(dizi,sizeof(dizi),stdin);
	int i=0,a=0;
	while(dizi[i]){
		if(dizi[i]==' ' || dizi[i]=='\n'){
			a++;
		}
		i++;
	}
	printf("the number of word in your string is : %d",a);
	return 0;
}
