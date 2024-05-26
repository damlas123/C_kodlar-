#include <stdio.h>
#include <stdlib.h>

struct musteri{
	char ad[40];
	char soyad[40];
	int hesapno;
	double bakiye;
};
int secimGir();
int textfile(FILE *);
void updaterecord(FILE *);
void newrecord(FILE *);
void deleterecord(FILE *);
void listrecord(FILE *);
int main(int argc, char *argv[]) {
	FILE *myptr;
	int selection;
	if((myptr=fopen("musteri.txt","r+"))==NULL){
		printf("the file can't created");
	}
	else{
		while((selection=secimGir)!=6){
			switch(selection){
				case 1:textfile(myptr);break;
				case 2:updaterecord(myptr);break;
				case 3:newrecord(myptr);break;
				case 4:deleterecord(myptr);break;
				case 5:listrecord(myptr);break;
			}
		}
		fclose(myptr);
	}
	return 0;
}
int secimGir(){
	int menusecim;
	printf("\n Choose your operator\1-)write the content of musteri.txt to hesaplar.txt\n2-Uptade record\n3-New record\n4-Delete record\n5-Show the content of musteri.txt\n6-Exit\n ");
	scanf("%d",&menusecim);
	return menusecim;
	
}
void textfile(FILE *okuptr){
	FILE *yazptr;
	struct musteri hesapbilgi;
	strcpy(hesapbilgi.ad,"damla");
	strcpy(hesapbilgi.soyad,"soylemez");
	hesapbilgi.bakiye=1464.78;
	hesapbilgi.hesapno=1;
	if((yazptr=fopen(hesaplar.txt,"w"))==NULL){
		printf("the file can't created");
	}
	else{
		rewind(okuptr);
		fprintf(yazptr,"%-10s%-16s%-11s%10s\n","HesapNo","Soyad","Bakiye");
		while(!feof(okuptr)){
			fread(&hesapbilgi,sizeof(struct musteri),1,okuptr);
			if(hesapbilgi.hesapno!=0){
				frpintf(yazPtr,"%-10d%-16s%-11s%10.2lf\n",hesapbilgi.hesapno,hesapbilgi.soyad,hesapbilgi.ad,hesapbilgi.bakiye);
			}
		}
		
			fclose(yazptr);
	}
}
void updaterecord(FILE *fptr){
	int hesapId;
	double islemmiktari;
	struct musteri hesapbilgi;
	strcpy(hesapbilgi.ad,"");
	strcpy(hesapbilgi.soyad,"");
	hesapbilgi.hesapno=0;
	hesapbilgi.bakiye=0.0;
	printf("Enter the account number:");
	scanf("%d",&hesapId);
	fseek(fptr,(hesapId-1)*sizeof(struct musteri),SEEK_SEY)
}
