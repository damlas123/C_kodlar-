#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[100];
	int i=0,j=0;
	printf("enter your sentence:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	while(array[i]){
		if(array[i]==' ' || array[i]=='\0'  || array[i]=='\n'){
			j++;
		}
		i++;
	}
	printf("the number of word is:%d",j);
	return 0;
}
