#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char array[100];
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	int i=0;
	while(array[i]!='\n' && array[i]!='\0'){
		i++;
	}
	array[i]='\0';
	
	printf("%s",array);
	return 0;
}
