#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *myptr;
	int hesapno;
	char name[40];
	int amount;
	myptr=fopen("text.txt","r");
	if(myptr==NULL){
		printf("there is no information");
	}
	else{
		fscanf(myptr,"%d%s%d",&hesapno,name,&amount);
		while(!feof(myptr)){
			printf("%-13d%-13s%-13d\n",hesapno,name,amount);
			fscanf(myptr,"%d%s%d",&hesapno,name,&amount);
			
		}
		fclose(myptr);
	}
	return 0;
}
