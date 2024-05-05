#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya,*source;
	char filename[45],name[45],character;
	printf("enter the file which information copied:");
	gets(filename);
	dosya=fopen(filename,"r");
	if(dosya==NULL){
		printf("file can't found");
		exit(1);
	}
	printf("enter the file which information will be copy:");
	gets(name);
	source=fopen(name,"w");
	if(source==NULL){
		printf("the file can't found");
		exit(1);
	}
	for(character=getc(dosya);character!=EOF;character=getc(dosya)){
		putc(character,source);
	}
	fclose(dosya);
	fclose(source);
	
	return 0;
}
