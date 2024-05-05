#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

int main(int argc, char *argv[]) {
	FILE *dosya;
	int i=0;
	double sinus,cosinus;
	dosya=fopen("derece.txt","w");
	if(dosya==NULL){
		printf("the file can't created");
	}
	else{
		fprintf(dosya,"DEGREE\tSINUS\tCOSINUS\n");
		fprintf(dosya,"=====\t=====\t=======\n");
		for(i=0;i<=360;i++){
			sinus=sin(i*PI/180);
			cosinus=cos(i*PI/180);
			fprintf(dosya,"     \t%lf   \t%lf   \n",sinus,cosinus);
		}
	}
	fclose(dosya);
	return 0;
}
