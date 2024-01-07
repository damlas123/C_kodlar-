#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char sentence[100],max[50],min[50];
	printf("enter sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	int i=0;
	strcpy(max,sentence[i]);
	strcpy(min,sentence[i]);
	while(sentence[i]){
		if(strcmp(sentence[i+1],max)>0){
			max[50]=sentence[i+1];
		}
		else if(strcmp(sentence[i+1],min)>0){
			strcpy(min,sentence[i]);
		}
		i++;
	}   
	printf("the max word is:%s and the min word:%s",max,min);                  
	return 0;
}
