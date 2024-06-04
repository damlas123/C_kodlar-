#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int balance1,no1;
	int balance,no;
	char name1[20],name[20];
	FILE *myptr;
	if((myptr=fopen("client.txt","w"))==NULL){
		printf("the file can not opened");
	}
	else{
		printf("enter account number,name and balance:(for finishing enter 0 for account number)\n");
		scanf("%d",&no1);
		scanf("%s %d",name1,&balance1);
		while(no1!=0){
		fprintf(myptr,"%d %s %d",no1,name1,balance1);
		printf("enter account number,name and balance:(for finishing enter 0 for account number)\n");
		scanf("%d",&no1);
		if(no1==0){
			break;
		}
		scanf("%s %d",name1,&balance1);
		}
	}
	fclose(myptr);
	if((myptr=fopen("client.txt","r"))==NULL){
		printf("the file is null");
	}
	else{
		printf("MENU\n1-)the account with no money\t2-)with money\t3-)owe account\t4-)exit\n");
		int secim;
		scanf("%d",&secim);
		while(secim!=4){
		fscanf(myptr,"%d %s %d",&no,name,&balance);
		switch(secim){
			case 1:{
					printf("\nthe account with no money\n");
				while(fscanf(myptr,"%d %s %d",&no,name,&balance)!=EOF){
					
					if(balance==0){
						printf("%d\t%s\t%d\n",no,name,balance);
					}
				}
			
				break;
			}
			case 2:{
				printf("\naccount wiht money:\n");
				while(fscanf(myptr,"%d %s %d",&no,name,&balance)!=EOF){
					if(balance>0){
						printf("%d\t%s\t%d\n",no,name,balance);
					}
				}
				break;
			}
			case 3:{
				printf("\naccount which owe monwy\n");
				while(fscanf(myptr,"%d %s %d",&no,name,&balance)!=EOF){
					if(balance<0){
						printf("%d\t%s\t%d\n",no,name,balance);
					
					}
				}
				break;
			}
			case 4:{
				exit(0);
				break;
			}
		}
		rewind(myptr);
		printf("enter your choosing:\n");
		scanf("%d",&secim);
	}
}
fclose(myptr);
	return 0;
}
