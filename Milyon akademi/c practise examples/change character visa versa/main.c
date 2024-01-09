#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char d[100];
	printf("enter a string:");
	fgets(d,sizeof(d),stdin);
	d[strcspn(d,"\n")]='\0';
	int i,ch;
	ch=strlen(d);
	for(i=0;i<ch;i++){
		char ch=islower(d[i]) ? toupper(d[i]) : tolower(d[i]);
		putchar(ch);
	}
	return 0;
}
