#include <stdio.h>
#include <stdlib.h>

#include <string.h>
 void findfrequency(char sentence[],int frequency[]){
 
     int i=0;
 	while(sentence[i]){
 			if(sentence[i]!=' ' ){
 				frequency[(int)sentence[i]]++;
			 }
			 i++;
		 }
		 for(i=0;i<256;i++){
		 	if(frequency[i]>0){
		 		printf("%c %d times used\n",(char)i,frequency[i]);
			 }
		 }
	 }
 
int main(int argc, char *argv[]) {
	char array[100];
	int length[256]={0};

	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	findfrequency(array,length);

	return 0;
}
