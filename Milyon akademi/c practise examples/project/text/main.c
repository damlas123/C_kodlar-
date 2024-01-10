#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
	// cümlenin kac karakterli oldugunu bulma
	/*int i=0,j=0;
	char array[100];
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	strupr(array);
	while(array[i]){
		if(array[i]>='A' && array[i]<='Z'){
			j++;
		}
		i++;
	}
	printf("the word number of your array is:%d",j);
	*/
	//girilen cumledeki kelimeleri alt alta yazma
	/*int i=0,k=0,a=0;
	char array[100],word[100][100];
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	while(array[i]){
		if(array[i]!=' ' ){
			word[k][a]=array[i];
			a++;
		}
		else{
			word[k][a]='\0';
			k++;
			a=0;
		}
		i++;
	}
	for(i=0;i<k+1;i++){
		printf("%s\n",word[i]);
	}
	*/
	return 0;
}
