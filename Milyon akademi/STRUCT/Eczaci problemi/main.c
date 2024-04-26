#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct eczaci{
	char isim[50];
	int aded;
	int fiyat;
}ilac;
int main(int argc, char *argv[]) {
	ilac damla[MAX];
	int i;
	for(i=0;i<MAX;i++){
		printf("ilac ismi:");
		scanf("%s",&damla[i].isim);
		printf("adedi giriniz:");
		scanf("%d",&damla[i].aded);
		printf("fiyati giriniz:");
		scanf("%d",&damla[i].fiyat);
	}
	printf("************ADEDI 20 ALTINDA OLAN ILACLAR****************************\n");
	for(i=0;i<MAX;i++){
		if(damla[i].aded<=20){
			printf("%s\n",damla[i].isim);
		}
	}
	return 0;
}
