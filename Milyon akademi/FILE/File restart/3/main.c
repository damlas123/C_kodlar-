#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *myptr;
	int number;
	char aranan[20],name[20];
	printf("enter student name:");
	scanf("%s",aranan);
	if((myptr=fopen("my.txt","r"))==NULL){
		printf("the file can not read");
	}
	else{
		while(fscanf(myptr,"%s%d",name,&number)!=EOF){
			if(strcmp(aranan,name)==0){
				printf("%s %d",name,number);
				break;
			}
		}
	}
	fclose(myptr);
	return 0;
}
