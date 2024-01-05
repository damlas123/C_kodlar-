#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0,count=0;
	char sentence[100];
	printf("enter your text :");
	fgets(sentence,sizeof(sentence),stdin);
	while(sentence[i]){
		if(sentence[i]==32){
			count++;
		}
		i++;
	}
	printf("the number of word of your sentence is:%d",count+1);
	return 0;
}
