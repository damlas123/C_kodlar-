#include <stdio.h>
#include <stdlib.h>


int main() {
	int age,driverLicence,undergradeDiploma;
	printf("if you have driver licence enter :1 else:0 && if you have undergrade licence enter:1 else:0\n");
	printf("enter your age:");
	scanf("%d",&age);
	printf("please enter your  knowledge");
	scanf("%d",&driverLicence);
	printf("enter your other knowledge:");
	scanf("%d",&undergradeDiploma);
	if(age>40){
		printf("you aren't proper for the this job\n");
	}
	if(driverLicence==0){
		printf("you aren't proper for the this job\n");
	}
	if(undergradeDiploma==0){
		printf("you aren't proper for the this job");

	}
	if(age<40 && undergradeDiploma==1 && driverLicence==1){
		printf("you got the job congrutilions");
		
	}
	
	return 0;
}
