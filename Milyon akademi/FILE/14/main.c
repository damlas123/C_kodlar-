#include <stdio.h>
#include <stdlib.h>

struct musteri{
	char ad[40];
	int hesap;
	char soyad[40];
	double bakiye;
};
int main(int argc, char *argv[]) {
	FILE *myptr;
	int i;
	struct musteri bosmusteri;
	strcpy(bosmusteri.ad,"damla");
	strcpy(bosmusteri.soyad,"soylemez");
	bosmusteri.bakiye=8523145785632.0;
	bosmusteri.hesap=6;
	
	myptr=fopen("musteri.txt ","w");
	if(myptr==NULL){
		printf("the file can't created");
	}
	else{
		for(i=0;i<3;i++){
			fwrite(&bosmusteri,sizeof(struct musteri),1,myptr);
		}
		fclose(myptr);
	}
	return 0;
}
