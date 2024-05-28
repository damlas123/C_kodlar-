#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *myptr;
	myptr=fopen("text.txt","r+");
	int hesap;
	int bakiye;
	int selection;
	char name[40];
	if(myptr==NULL){
		printf("the file is null");
	}
	else{
		do{
			printf("MENU\n1-hesapta para olmayan hesaplar\n2-borclu olan hesaplar\n3-hesapta para olan hesaplar\n");
			printf("\nenter your selection:");
			scanf("%d",&selection);
			switch(selection){
				case 1:{
					printf("%13s%13s%13s\n","HESAP","AD","BAKIYE");
					printf("\nhesapta para olmayan hesaplar:\n");
					while(!feof(myptr)){
						if(bakiye==0){
							fscanf(myptr,"%d%s%d",&hesap,name,&bakiye);
							printf("%10d%13s%12d\n",hesap,name,bakiye);
						}
					}
					break;
				}
				case 2:{
					printf("%13s%13s%13s\n","HESAP","AD","BAKIYE");
					printf("\nborclu hesaplar:\n");
					while(!feof(myptr)){
						if(bakiye<0){
						
						fscanf(myptr,"%d%s%d",&hesap,name,&bakiye);
						printf("%10d%13s%12d\n",hesap,name,bakiye);
						}
					}
					break;
				}
				case 3:{
					printf("\nhesabinda para olan hesaplar\n");
					while(!feof(myptr)){
						if(bakiye>0){
						
						fscanf(myptr,"%d%s%d",&hesap,name,&bakiye);
						printf("%10d%13s%12d\n",hesap,name,bakiye);}
					}
					break;
				}
				case 4:{
					break;
				}
			}
	
		}while(selection!=4);
		
		
			fclose(myptr);
	}
	return 0;
}
