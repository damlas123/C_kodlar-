#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float h,w;
	int ibm;
	printf("enter your height:");
	scanf("%f",&h);
	printf("enter your weight:");
	scanf("%f",&w);
	ibm=(h)/(w*w);
	if(ibm<18.5){
		printf("weak:%d",ibm);
	}
	else if (ibm>18.5 && ibm<=24.9){
		printf("normal:%d",ibm);

	}
    else if(ibm>=25 && ibm <=29.9){
    	printf("overweight:%d",ibm);
	}
	else if(ibm>=30 && ibm<=34.9){
		printf("1.dereceden obezite:%d",ibm);
	}
	else if(ibm>=35 && ibm<40){
		printf("2.dereceden obezite:%d",ibm);
	}
	else{
		printf("3.dereceden obezite:%d",ibm);
	}
	return 0;
}
