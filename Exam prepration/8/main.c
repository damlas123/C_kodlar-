#include <stdio.h>
#include <stdlib.h>

struct musteri{
	int hesap;
	char isim[40];
	double bakiye;
};
int main(int argc, char *argv[]) {
	int i;
	struct musteri bosmusteri={0,"",0.0	};
	FILE *myptr;
	if((myptr=fopen("musteri.txt","w"))==NULL){
		printf("the file can!t created or opened");
	}
	else{
		for(i=0;i<=100;i++){
			fwrite(&bosmusteri,sizeof(struct musteri),1,myptr);
		}
		fclose(myptr);
	}
	return 0;
}
