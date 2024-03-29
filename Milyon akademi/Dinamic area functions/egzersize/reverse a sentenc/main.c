#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *metin;
	metin=(char *)malloc(50*sizeof(char));
	printf("enter sentence:");
	gets(metin);
	int i=strlen(metin)-1;
	for(i=strlen(metin)-1;i>=0;i--){
		printf("%c",*(metin+i));
		
	}
	free(metin);
	return 0;
}
