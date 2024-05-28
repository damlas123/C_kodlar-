#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct musteri{
	int hesapno;
	char name[40];
	double bakiye;
};
int main(int argc, char *argv[]) {
	struct musteri hesap={0,"",0.0	};
	FILE *myptr;
	if((myptrt=fopen("musteri.txt","r"))==NULL){
		printf("the file is null");
	}
	else{
		printf("HESAPNO\TNAME\TBAKIYE\n");
		while(!feof(myptr)){
			fread(&hesapno,sizeof(struct museri),1,myptr);
			if(hesap.hesapno!=0){
				printf("%d\t%s\t%d",hesap.hesapno,hesap.name,hesap.bakiye);
			}fclose(myptr);
		}
	}
	getchar();
	return 0;
}
