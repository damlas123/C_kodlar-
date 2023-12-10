#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float h,w;
	double ibm;
	printf("enter your height:");
	scanf("%f",&h);
	printf("enter your weight:");
	scanf("%f",&w);
	ibm=w3/(h*h);
	if(ibm<18.5){
		printf("weak:%lf",ibm);
	}
	else if (ibm>18.5 && ibm<=24.9){
		printf("normal:%lf",ibm);

	}
    else if(ibm>=25 && ibm <=29.9){
    	printf("overweight:%lf",ibm);
	}
	else if(ibm>=30 && ibm<=34.9){
		printf("1.dereceden obezite:%lf",ibm);
	}
	else if(ibm>=35 && ibm<40){
		printf("2.dereceden obezite:%lf",ibm);
	}
	else{
		printf("3.dereceden obezite:%lf",ibm);
	}
	return 0;
}
