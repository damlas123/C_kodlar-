#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char array[100],specificcharacter;
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	printf("enter a specific character you want to replace spaces:");
	scanf("%c",&specificcharacter);
	int i=0;
	array[strcspn(array,"\n")]='\0';
	while(array[i]){
		if(array[i]!=' '){
			i++;
		}
		else{
			array[i]=specificcharacter;
			i++;
		}
	}
	int len=strlen(array);
	for(i=0;i<len;i++){
		printf("%c",array[i]);
	}
	return 0;
}
