#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *d1,*d2;
	d1=fopen("information.txt","r");
	d2=fopen("newfile.txt","w");
	int character;
	if(d1==NULL || d2==NULL){
		printf("the files cant created");
	}
	else{
		do{
			character=getc(d1);
			if(character>='a' && character<='z'){
				fprintf(d2,"%c",character-32);
			}
			else{
				fprintf(d2,"%c",character);
			}
		}while(character!=EOF);
		fclose(d1);
	fclose(d2);
	}
	
	return 0;
}
