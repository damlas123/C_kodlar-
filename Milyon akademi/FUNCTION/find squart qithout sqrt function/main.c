#include <stdio.h>
#include <stdlib.h>
 double squart(double number);
 
int main(int argc, char *argv[]) {
	double num;
	printf("enter the number:");
    scanf("%lf",&num);
    double squar;
    squar=squart(num);
    printf("the squart of this number is:%.5lf",squar);
	return 0;
}
 double squart(double number){
 	double kar;
 	int i;
 	kar=number/2;
 	if(number>0.0){
 		for(i=0;i<50;i++){
 			kar=((kar*kar)+number)/(2*kar);
		 }
		 return kar;
 		
	 }
	 else if(number==0){
	 	return 0;
	 }
	  else {
	  	printf("the square of negative number is not taken");
	  }
 }
