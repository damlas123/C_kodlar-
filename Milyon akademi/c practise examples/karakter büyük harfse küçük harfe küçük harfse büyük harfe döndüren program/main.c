#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char d[100];
	int ch,i;
	printf("enter your sentence:");
	fgets(d,sizeof(d),stdin);
	ch=strlen(d);
	for(i=0;i<ch;i++){
		char ch=islower(d[i]) ? toupper(d[i]): tolower(d[i]);
		putchar(ch);
	}
	return 0;
}
