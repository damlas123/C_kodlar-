#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya;
	char character[30];
	while(1){
		printf("enter a word:");
		gets(character);
		if(character[0]=='0'){
			exit(1);
		}
		else{
			
	dosya=fopen("words.txt","a");
	if(dosya==NULL){
		printf("the file can't created");
		
	}
	else{
		fprintf(dosya,"%s\n",character);
        fclose(dosya);
	}
		}
	}
	return 0;
}
