#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	/*FILE *dosya;
	dosya=fopen("damla.txt","w");
	fclose(dosya);*/
	FILE *dosya;
	/*char isim[]="damla";
	dosya=fopen("damla.txt","w");
	fprintf(dosya,"bu dosya %s dosyasidir.",isim);/*/
/*	int i,j;
	dosya=fopen("carpim.txt","w");
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			fprintf(dosya,"%d * %d =%d\n",i,j,i*j);
		}
	}*/
	/*dosya=fopen("ogrenci.txt","w");
	char isim[20],okul[50],bolum[50];
	printf("adinizi giriniz:");
	fgets(isim,sizeof(isim),stdin);
	printf("okulu:");
	gets(okul);
	printf("bolum:");
	gets(bolum);
	fprintf(dosya,"%s\n%s\n%s",isim,okul,bolum);*/
	dosya=fopen("merhaba.txt","a");
	fputs("\nmerhaba world",dosya);
	fclose(dosya);
	return 0;
}
