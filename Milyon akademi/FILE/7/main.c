#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya;
	char row[100],filename[45];
	char *character;
	printf("enter file name:");
	gets(filename);
	dosya=fopen(filename,"r");
	if(dosya==NULL){
		printf("file can't created");
	}
	else{
		do{
		character=fgets(row,100,dosya);
		if(character!=NULL){
			printf(row,"%s",dosya);
		}
	}while(character!=NULL);
	}
	return 0;
}
