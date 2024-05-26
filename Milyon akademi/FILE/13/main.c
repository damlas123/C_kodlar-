#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int hesapNo;
	char ad[40];
	double bakiye;
	FILE *myptr;
	if((myptr=fopen("musteri.txt","r"))==NULL){
		printf("dosya acilamadi");
	}
	else{
		printf("%-10s%-13s%s\n","HesapNo","Ad","Bakiye");
		fscanf(myptr,"%d%s%lf",&hesapNo,ad,&bakiye);
		while(!feof(myptr)){
			printf("%-10d%-13s%7.2lf\n",hesapNo,ad,bakiye);
			fscanf(myptr,"%d%s%lf",&hesapNo,ad,&bakiye);
		}
		fclose(myptr);
	}
	return 0;
}
