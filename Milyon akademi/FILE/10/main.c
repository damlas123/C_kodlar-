#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *d1,*d2,*d3;
	char character;
	d1=fopen("information.txt","r");
	d2=fopen("data.txt","r");
	d3=fopen("merging.txt","r");
	if(d1==NULL || d2==NULL || d3==NULL){
		printf("the files can't created or read");
	}
	else{
		do{
			character=getc(d1);
			if(character!=EOF){
				fprintf(d3,"%c\n",character);
			}
			
		}while(character!=EOF);
		do{
			character=getc(d2);
			if(character!=EOF){
				fprintf(d3,"%c\n",character);
			}
			
		}while(character!=EOF);
	}
	fclose(d1);
	fclose(d2);
	fclose(d3);
	return 0;
}
