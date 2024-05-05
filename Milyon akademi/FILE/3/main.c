#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya;
	char *character;
	char satir[100];

	dosya=fopen("bilgi.txt","r");
	if(dosya!=NULL){
		do{
			character=fgets(satir,100,dosya);
			if(character!=NULL){
				printf("%s",satir);
			}
		}while(character!=NULL);
	}
	else{
		printf("the file can't created");
	}
	fclose(dosya);
	return 0;
}
