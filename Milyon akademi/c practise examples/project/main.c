#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char array[100];
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	int i=0,j=0;
	while(array[i]){
		if(array[i]!=' '){
			array[j]=array[i];
			j++;
		}
	i++;
	}
	int len=strlen(array);
for(i=0;i<len;i++){
	printf("%c",array[i]);
}
	return 0;
}
