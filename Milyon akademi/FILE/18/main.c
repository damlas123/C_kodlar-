#include <stdio.h>
#include <stdlib.h>

struct client{
	char name[40];
	char surname[40];
	int no;
	int account;
};
int main(int argc, char *argv[]) {
	FILE *ptr;
	int i;
	struct client c1= {"","",0,0};
	if((ptr=fopen("client.txt","w"))==NULL){
		printf("the file can't created");
	}
	else{
		for(i=1;i<101;i++){
			fwrite(&c1,sizeof(struct client),1,ptr);
		}
		printf("Creating file is done\n");
		fclose(ptr);
	}
	if((ptr=fopen("client.txt","r+"))==NULL){
		printf("the file is NULL");
	}
	else{
		
		printf("enter client number:");
		scanf("%d",&c1.no);
		while(c1.no!=0){
			printf("enter client name-surname-account amount:");
			scanf("%s%s%d",c1.name,c1.surname,&c1.account);
			fseek(ptr,(c1.no-1)*sizeof(struct client),SEEK_SET);
			fwrite(&c1,sizeof(struct client),1,ptr);
			printf("enter client number for exit enter 0:");
			scanf("%d",&c1.no);
		}
		fclose(ptr);
	}
	printf("Record the client is done\n");

	if((ptr=fopen("client.txt","r"))==NULL){
		printf("the file can't be read");
	}
	else{
			printf("NAME\t\tSURNAME\tACCOUNT\tBAKIYE\n\n ");
			while(!feof(ptr)){
				fread(&c1,sizeof(struct client),1,ptr);
				printf("%s\t\t%s\t%d\t%d\n",c1.name,c1.surname,c1.no,c1.account);
			}
			fclose(ptr);
		}
	return 0;
}
