#include <stdio.h>
#include <stdlib.h>

struct musteri{
	int h;
	char name[40];
	double bakiye;
};
int main(int argc, char *argv[]) {
	struct musteri hesap={0,"",0.0};
	FILE *myptr;
	if((myptr=fopen("text.txt","r+"))==NULL){
		printf("the file can't created or opened");
	}
	else{
		printf("enter account number ");
		scanf("%d",&hesap.h);
		while(hesap.h!=0){
			printf("enter name and amount");
			fscanf(stdin,"%s%lf",hesap.name,&hesap.bakiye);
			fseek(myptr,(hesap.h-1)*sizeof(struct musteri),SEEK_SET);
			fwrite(&hesap,sizeof(struct musteri),1,myptr);
			printf("enter hesap number:");
			scanf("%d",&hesap.h);
		}
		fclose(myptr);
	}
	return 0;
}
