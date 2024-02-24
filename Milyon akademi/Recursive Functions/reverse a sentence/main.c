#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char senten[],int n1){
	
	if(n1==0){
		printf("%c",senten[n1]);
	}
	else {
	    	
		printf("%c",senten[n1]);
		reverse(senten,n1-1);
	}

	
}
int main(int argc, char *argv[]) {
	printf("enter a sentence:");
	char sentence[100];
	fgets(sentence,sizeof(sentence),stdin);
	int n=strlen(sentence);
	reverse(sentence,n-1);
	
	return 0;
}
