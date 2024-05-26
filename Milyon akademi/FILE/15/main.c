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
	strcpy(o1.ad,"");
	o1.no=0;
	if((ptr=fopen("ogrenc.txt","w"))==NULL){
		printf("the file can't created");
	}
	else{
		for(i=1;i<101;i++){
			fwrite(&o1,sizeof(struct student),1,ptr);
		}
		printf("The writing on the file is done");
		fclose(ptr);
	}
	
	return 0;
}
