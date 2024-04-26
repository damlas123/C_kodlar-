#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct coordinate{
	float x;
	float y;
}ball;
int main(int argc, char *argv[]) {
	ball coor;
	float t;
	for(t=0.0;t<10.0;t++){
		coor.x=20-6*cos(t);
		coor.y=15+2*sin(t);
	}
	printf("   X\t\t   Y\n");
	printf("==========\t==========\n");
	for(t=0.0;t<10.0;t++){
	printf("%f\t%f\n",coor.x,coor.y);
	}
	return 0;
}
