#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	const float PI=3.14;
	float d,r,g;
	printf("enter the degree:");
	scanf("%f",&d);
	r=d*PI/180;
	g=d*PI/200;
	printf("the radyon of this degree is :%f\n",r);
	printf("the gradyonof this degree is: %f",g);
	return 0;
}
