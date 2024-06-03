#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE *myptr;
    char sentence[50],ch;
    int i;
    if((myptr=fopen("my.txt","w"))==NULL){
    	printf("the file can not opened");
	}
	else{
		printf("enter a sentence:");
		gets(sentence);
		for(i=0;i<strlen(sentence);i++){
			putc(sentence[i],myptr);
		}
	
	}
	
		fclose(myptr);
	if((myptr=fopen("my.txt","r"))==NULL){
		printf("the file can not opened");
	}
	else{
		while((ch=getc(myptr))!=EOF){
			printf("%c",ch);
		}
		fclose(myptr);
	}
	return 0;
}
