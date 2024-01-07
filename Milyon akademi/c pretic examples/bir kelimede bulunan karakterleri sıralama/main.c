#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	
	char word[50],temp;
	int i,n,j;
	printf("enter a word:");
	scanf("%s",&word);
	n=strlen(word);
	for(i=1;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(word[j]>word[j+1]){
				temp=word[j];
				word[j] =word[j+1];
				word[j+1]=temp;
			}
		}
	}
	printf("the sorting of sentence is:\n");
	for(i=0;i<n;i++){
		printf("%c",word[i]);
	}
	return 0;
}
