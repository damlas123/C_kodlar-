#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya;
	char character;
	int i=0;
	dosya=fopen("bilgi.txt","r");
	if(dosya==NULL){
		printf("the file can't created");
	}
	else{
	
		do{
			character=getc(dosya);
			if(character!=EOF){
				putchar(character);
			}	
		}while(character!=EOF);
		
	}
	return 0;
}
