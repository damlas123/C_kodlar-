#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *dosya;
	dosya=fopen("information.txt","r");
	char *character,row[100];
	if(dosya==NULL){
		printf("the file can't found");
	}
	else{
		do{
			
			character=fgets(row,100,dosya);
			if(character!=NULL){
			printf("%s",character);
		}
	
	}	while(character!=NULL);
}
fclose(dosya);
	return 0;
}
