#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define CIRCLE_AREA(r) PI*r*r
int main(int argc, char *argv[]) {
	float radius,area;
	printf("enter radius:");
	scanf("%f",&radius);
	area=CIRCLE_AREA(radius);
	printf("the area of circle is:%.2f",area);
	return 0;
}
