#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
union calculater{
	float perimeter;
	float area;
};
int main(int argc, char *argv[]) {
	int radius;
	printf("enter radiues:");
	scanf("%d",&radius);
    union calculater circle;
	
	circle.area=radius*radius*PI;
	printf("the area of circle given radius:%f\n",circle.area);
	circle.perimeter=radius*2*PI;
	printf("the perimeter of circle given radius:%f",circle.perimeter);
	return 0;
}
