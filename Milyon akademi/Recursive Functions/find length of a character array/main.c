#include <stdio.h>
#include <stdlib.h>
 int number(char array[]){
 	int i=0;
 	if(array[i]!='\0'){
 	 return	(1+array[i+1]);
 		
	 }
	 else {
	 	return 0;
	 }
 	
 }
int main(int argc, char *argv[]) {
	printf("enter a sentence:");
	int sentence[100];
	gets(sentence);
	printf("the length of sentence:%d",number(sentence));
	return 0;
}
