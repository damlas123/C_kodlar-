#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int h,l;
	printf("enter the lenght of line:");
	scanf("%d",&l);
	printf("enter the height:");
	scanf("%d",&h);
	int area;
	area=h*l/2;
	printf("the area of this triangle:%d",area);
	
	
		return 0;
}
