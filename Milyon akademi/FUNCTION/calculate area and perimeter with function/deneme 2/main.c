#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
 float areacalculator(float r){
 	float ar;
 	ar=r*r*PI;
 	return ar;
 }
 float perimetercalculator(float r){
 	float per;
 	per=r*2*PI;
 	return per;
 }
int main(int argc, char *argv[]) {
	float radius,area,perimeter;
	printf("enter radius:");
	scanf("%f",&radius);
	area=areacalculator(radius);
	perimeter=perimetercalculator(radius);
	printf("the area of this circle:%.2f\n",area);
	printf("the perimeter of this circle:%.2f",perimeter);
	return 0;
}
