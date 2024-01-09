#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char sentence[100];
	printf("enter a sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	int i=0,j=0;
	char currentword[100],smallestword[100],longestword[100];
	while(sentence[i]){
		while(sentence[i]=='\t'|| sentence[i]=='\n' || sentence[i]=='\0'){
			i++;
		}
		while(sentence[i]!='\n' || sentence[i]!='\0' || sentence[i]!='\t'){
			currentword[j++]=sentence[i++];
		}
		currentword[j]='\0';
		if(strlen(currentword)>strlen(longestword) || srtlen(longestword)==0){
			strcpy(longestword,currentword);
		}
		if(strlen(smallestword)>strlen(currentword) || strlen(smallestword)==0){
			strcpy(smallestword,currentword);
		}
	}
	printf("the smallest word is:%s\t",smallestword);
	printf("the longest word is:%s",longestword);

		return 0;
}
