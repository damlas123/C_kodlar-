#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char sentence[50];
	printf("enter your sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	int i=0,count=0;
	while(sentence[i])
	{
		if(i==32){count++;
		}
	}
	printf("the number of your word is:%d",count);
	return 0;
}
