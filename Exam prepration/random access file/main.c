#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct veri{
	char name[40];
	char no;
	int balance;
};

int main(int argc, char *argv[]) {
	FILE *myptr;
	struct veri bosmusteri={"",0,0};
	if((myptr=fopen("client.txt","r"))==NULL){
		printf("the file cant opened");
	}
	else{
		printf("NAME\tACCOUNT\tBALANCE\n");
		
		while(!feof(myptr)){
	fread(&bosmusteri,sizeof(struct veri),1,myptr);
		if(bosmusteri.no!=0){
			printf("%s \t %d \t %d \n",bosmusteri.name,bosmusteri.no,bosmusteri.balance);
		}

		}
			fclose(myptr);
	}
	return 0;
}
