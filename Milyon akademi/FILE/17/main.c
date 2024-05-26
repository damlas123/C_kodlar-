#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
	char ad[40];
	int no;
};

int main(int argc, char *argv[]) {
	FILE *ptr;
	int i;
	struct student o1;
	if((ptr=fopen("ogrenci.txt","w"))==NULL){
		printf("the file can't created");
	}
	else{
		for(i=1;i<101;i++){
			fwrite(&o1,sizeof(struct student),1,ptr);
		}
		printf("Writing on the file is done");
		fclose(ptr);
	}
	
	if((ptr=fopen("ogrenci.txt","r+"))==NULL){
		printf("the file can't found");
	}
	else{
		printf("enter number for exit enter 0");
		scanf("%d",&o1.no);
		while(o1.no!=0){
			printf("enter name:");
			scanf("%s",o1.ad);
			fseek(ptr,(o1.no-1)*sizeof(struct student),SEEK_SET);
			fwrite(&o1,sizeof(struct student),1,ptr);
			printf("enter number for exit enter 0");
			scanf("%d",&o1.no);
		}
	}
	if((ptr=fopen("ogrenci.txt","r"))==NULL){
		printf("the file is null");
	}
	else{
		printf("NUMBER:      -NAME:");
		while(!feof(ptr)){
			fread(&o1, sizeof(struct student) , 1,ptr);
			if(o1.no!=0)
			printf("%d\t%s\n",o1.no,o1.ad);
		}
		printf("Reading from file is done");
		fclose(ptr);
	}

	return 0;
}
