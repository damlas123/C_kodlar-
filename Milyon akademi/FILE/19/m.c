#include <stdio.h>
#include <stdlib.h>

struct musteri{
	char name[40];
	char surname[40];
	int no;
	int bakiye;
};
int enter();
void update(FILE *);
void textfile(FILE *);
void newrecord(FILE *);
void deleterecord(FILE *);
void list(FILE *);
int main(int argc, char *argv[]) {
	FILE *ptr;
	int secim;
	if((ptr=fopen("bilgi.txt","w"))==NULL){
		printf("the file can't created");
	}
	else{
		while((secim=enter())!=6){
			switch(secim){
				case 1:{
					textfile(ptr);
					break;
				}
				case 2:{
					update(ptr);
					break;
				}
				case 3:{
					newrecord(ptr);
					break;
				}
				case 4:{
					deleterecord(ptr);
					break;
				}
				case 5:{
					list(ptr);
					break;
				}
			}
			fclose(ptr);
		}
	}
	return 0;
}
int enter(){
	int c;
	printf("MENU\n1-text file\n2-Update\n3-New record\n4-Delete Record\n5-List");
	printf("\nenter your choosing:");
	scanf("%d",&c);
	return c;
}
void textfile(FILE *d){
	FILE *p;
	struct musteri hesap={"","",0,0	};
	if((p=fopen("text.txt","w"))==NULL){
		printf("the file can't created");
		
	}
	else{
		rewind(d);
		fprintf(p,"%-10s%-10s%-10d%-10","NAME","SURNAME","NO","BAKIYE");
		while(!feof(d)){
		fread(&hesap,sizeof(struct musteri),1,d);
		if(hesap.no!=0){
			fprintf(p,"%-10s%-10s%-10d%-10",hesap.name,hesap.surname,hesap.no,hesap.bakiye);
		}
	}
	fclose(p);	
	}
}
void update(FILE *d){
	int hesap1;
	double islem;
	struct musteri hesap={"","",0,0	};
	printf("enter updated account number:");
	scanf("%d",&hesap1);
	fseek(d,(hesap1-1)*sizeof(struct musteri),SEEK_SET);
	fread(&hesap,sizeof(struct musteri),1,d);
	if(hesap.no==0){
		printf("there is no entering for account");
	}
	else{
	printf("%-10s%-10s%-10d%-10",hesap.name,hesap.surname,hesap.no,hesap.bakiye);
	printf("enter amount:");
	scanf("%lf",islem);
	hesap.bakiye+=islem;
	printf("%-10s%-10s%-10d%-10",hesap.name,hesap.surname,hesap.no,hesap.bakiye);
	fseek(d,(hesap1-1)*sizeof(struct musteri),SEEK_SET);
	fwrite(&hesap,sizeof(struct musteri),1,d);
	
	}
}
void deleterecord(FILE *Ptr){
	struct musteri hesap={"","",0,0	};
	int hesap1;
	printf("enter deleted record:");
	scanf("%d",&hesap1);
	fseek(Ptr,(hesap1-1)*sizeof(struct musteri),SEEK_SET);
	fread(&hesap,sizeof(struct musteri),1,Ptr);
	if(hesap.no==0){
		printf("there is no record ");
	}
	else{
		fseek(Ptr,(hesap1-1)*sizeof(struct musteri),SEEK_SET);
		fwrite(&hesap,sizeof(struct musteri),1,Ptr);
	}
}
void newrecord(FILE *p){
	int a;
	struct musteri hesap={"","",0,0	};
	printf("enter new record account number:");
	scanf("%d",&a);
	fseek(p,(a-1)*sizeof(struct musteri),SEEK_SET);
	fread(&hesap,sizeof(struct musteri),1,p);
	if(hesap.no!=0){
		printf("there have been already  an account");
	}
	else{
		printf("enter name surname and amount");
		scanf("%s%s%d",hesap.name,hesap.surname,&hesap.bakiye);
		fseek(p,(a-1)*sizeof(struct musteri),SEEK_SET);
		fwrite(&hesap,sizeof(struct musteri),1,p);
	}
}
void list(FILE *p){
	struct musteri hesap={"","",0,0	};
	printf("%-10s%-10s%-10d%-10","NAME","SURNAME","NO","AMOUNT");
	while(!feof(p)){
		fread(&hesap,sizeof(struct musteri),1,p);
		if(hesap.no!=0){
			printf("%-10s%-10s%-10d%-10",hesap.name,hesap.surname,hesap.no,hesap.bakiye);
		}
	}
	fclose(p);
	getchar();
}
