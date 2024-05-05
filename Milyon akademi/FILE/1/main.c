#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya;
/*	char character[]="damla";
	dosya=fopen("deneme.txt","w");
    fprintf(dosya,"this file created by %s",character);*/
  /*  dosya=fopen("carpimtablosu.txt","w");
    int i,j;
    for(i=1;i<10;i++){
    	for(j=1;j<10;j++){
    		fprintf(dosya,"%d * %d =%d\n",i,j,i*j);
		}
	}*/
	/*dosya=fopen("student.txt","a");
	char name[20],no[20],department[20];
	printf("enter name:");gets(name);
	printf("enter student number:");gets(no);
	printf("enter department:");gets(department);
	fprintf(dosya,"%s\t%s\t%s\n",name,no,department);*/
	/*dosya=fopen("merhaba.txt","a");
	fputs("\nNo I have to live ",dosya);*/
//	dosya=fopen("deneme.txt","r");
	/*char character;
	if(dosya!=NULL){
		character=fgetc(dosya);
		printf("%c",character);
	}
	else{
		printf("this file is not created");
	}
	*/
/*	char k1[20],k2[20];
	int sayi;
	if((dosya=fopen("canan.txt","r"))!=NULL){
		fscanf(dosya,"%s",&k1);
		fscanf(dosya,"%s",&k2);
		fscanf(dosya,"%d",&sayi);
		printf("%s %s %d",k1,k2,sayi);
		
		
	}*/
	/*char k[20][20];
	int i=0;
	fclose(dosya);
	if((dosya=fopen("canan.txt","r"))!=NULL){
		while(!feof(dosya)){
			fscanf(dosya,"%s",&k[i]);
	
			printf("%s",k[i]);
				i++;
		}
	}
	*/
	char numbers[10][10],names[10][20],surnames[10][20];
	int i=0;
	if((dosya=fopen("student_1","r"))!= NULL){
		while(!feof(dosya)){
			fscanf("%s %s %s",&numbers[i],&names[i],&surnames[i]);
			printf("%s %s %s",numbers[i],names[i],surnames[i]);
			i++;
		}
	}
	else{
		printf("the file can't created");
	}
	return 0;
}
