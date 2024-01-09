#include <stdio.h>
#include <stdlib.h>
 void findlargestandsmallestword(char sentence[],char max[],char min[]){
 	char word[10][10];
 	int i=0,a=0,j=0;
 	while(sentence[i]){
 		if(sentence[i]==' ' || sentence[i]=='\0'){
 			word[j][a]='\0';
 			j++;
			 a=0;
		 }
		 else{
		 	word[j][a]=sentence[i];
		 	a++;
		 }
		 i++;
	}
	if(j>0){

	strcpy(max,word[0]);
	strcpy(min,word[0]);

	for(i=1;i<j;i++){
	if(strlen(max)<strlen(word[i])){
		strcpy(max,word[i]);
	}
	if(strlen(min)>strlen(word[i])){
		strcpy(min,word[i]);
	}
 } 
 }
}
int main() {
	char array[100],longest[10],smallest[10];
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	findlargestandsmallestword(array,longest,smallest);
	printf("the longest word :%s\n",longest);
	printf("the smallest word is:%s",smallest);
	return 0;
}
