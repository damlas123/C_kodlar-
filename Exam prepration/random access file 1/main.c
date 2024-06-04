#include <stdio.h>
#include <stdlib.h>
struct veri{
	char name[20];
	int no;
	double balance;
};
int enter_operation(void);
void textfile(FILE *);
void update_record(FILE *);
void new_record(FILE*);
void delete_record(FILE *);
void list(FILE *);

int main(int argc, char *argv[]) {
	FILE *myptr;
	struct veri bosmusteri={"",0,0.0};
	if((myptr=fopen("client.txt","w"))==NULL){
		printf("the file can not opened");
	}
	else{
		printf("enter account number for exit 0:");
		scanf("%d",&bosmusteri.no);
		while(bosmusteri.no!=0){
			printf("enter name and balance:");
			scanf("%s %d",bosmusteri.name,&bosmusteri.balance);
			fseek(myptr,(bosmusteri.no-1)*sizeof(struct veri),SEEK_SET);
			fwrite(&bosmusteri,sizeof(struct veri),1,myptr);
			printf("enter account number for exit 0");
			scanf("%d",&bosmusteri.no);
		}
		fclose(myptr);
	}
   if((myptr=fopen("client.txt","r"))==NULL){
   	printf("the file is null");
   }
   else{
   	int secim;
   	while((secim=enter_operation())!=6){
   		switch(secim){
   			case 1:{
   				textfile(myptr);
				break;
			   }
   			case 2:{
   				update_record(myptr);
   			
				break;
			   }
		    case 3:{
		    	new_record(myptr);
		    	
				break;
			}
		    case 4:{
		    	delete_record(myptr);
		    
				break;
			}
			case 5:{
			 list(myptr);
	
				break;
			}
		   }
	   }
	   fclose(myptr);
   }
	return 0;
}
int enter_operation(void){
	int s;
   	printf("MENU\n1-)Write the content of client.txt to another file\n2-)Update a balance\n3-)Add new record\n4-)Delete record\n5-)List\n6-)Exit\n");
   	printf("enter your operation:");
   	scanf("%d",&s);
   	return s;
}
void textfile(FILE *okuptr){
	FILE *yazptr;
	struct veri musteri={"",0,0.0};
	if((yazptr=fopen("copied.txt","w"))==NULL){
		printf("the file is can't opened");
	}
	else{
		rewind(okuptr);
		fprintf(yazptr,"%s\t%s\t%s\n","ACCOUNT","NAME","BALANCE");
		while(!feof(okuptr)){
			fread(&musteri,sizeof(struct veri),1,okuptr);
			if(musteri.no!=0){
				fprintf(yazptr,"%s \t %d \t %d\n",musteri.name,musteri.no,musteri.balance);
			}
		}
	}
	fclose(yazptr);
	
};
void update_record(FILE *file){
	struct veri bosmusteri={"",0,0.0};
	int std;
	double money;
	printf("enter updated account number:");
	scanf("%d",&std);
	fseek(file,(std-1)*sizeof(struct veri),SEEK_SET);
	fread(&bosmusteri,sizeof(struct veri),1,file);

		if(bosmusteri.no==0){
			printf("for this account there is no information entered");
		}
		else{
			printf("enter balance +/-");
			scanf("%lf",&money);
			bosmusteri.balance+=money;
			fseek(file,(std-1)*sizeof(struct veri),SEEK_SET);
			fwrite(&bosmusteri,sizeof(struct veri),1,file);
		}
	}

void new_record(FILE *file){
	struct veri bosmusteri={"",0,0.0};
	printf("enter new account number:");
	int std;
	scanf("%d",&std);
	fseek(file,(std-1)*sizeof(struct veri),SEEK_SET);
	fread(&bosmusteri,sizeof(struct veri),1,file);

	if(bosmusteri.no!=0){
		printf("there is already have an acocunt");
	}
	else{
		printf("enter name and balance:");
		scanf("%s %d",bosmusteri.name,&bosmusteri.balance);
		fseek(file,(std-1)*sizeof(struct veri),SEEK_SET);
		fwrite(&bosmusteri,sizeof(struct veri),1,file);
	}
}
void delete_record(FILE *file){
	int std;
	struct veri musteri,bosmusteri={"",0,0.0};
	printf("enter deleted account number:");
	scanf("%d",&std);
	
	fseek(file,(std-1)*sizeof(struct veri),SEEK_SET);
	fwrite(&musteri,sizeof(struct veri),1,file);
	if(musteri.no==0){
		printf("there is no account");
	}
	else{
		fseek(file,(std-1)*sizeof(struct veri),SEEK_SET);
		fwrite(&bosmusteri,sizeof(struct veri),1,file);
	}
}
void list(FILE *file){
	struct veri musteri={"",0,0.0};
	printf("NAME\tACCOUNT\tBALANCE\n");
	rewind(file);
	while(!feof(file)){
		fread(&musteri,sizeof(struct veri),1,file);
		if(musteri.no!=0){
			printf("%s\t %d \t %d\n",musteri.name,musteri.no,musteri.balance);
		}
	}
	fclose(file);
	getchar();
}
