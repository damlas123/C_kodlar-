#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 float areacalculator(float r)
{
	float area;
	area=r*r*3.14;
	return area;
}
 float perimetercalcualtor(float r){
 	float perimeter;
	 perimeter=2*3.14*r;
 	return perimeter;
 }

int main(int argc, char *argv[]) {
	float radius,a,p;
	printf("enter the radius of circle:");
	scanf("%f",&radius);
	a=areacalculator(radius);
	p=perimetercalculator(radius);
	printf("the area of circle is:%.2f",a);
	printf("the perimeter of circle is:%.2f",p);
	return 0;
}
