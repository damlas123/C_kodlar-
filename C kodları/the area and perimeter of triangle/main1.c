#include <stdio.h>
#include <stdlib.h>

int main() {
	int side1,side2,floor,altitude,area,perimeter;
    printf("enter side1:");
    scanf("%d",&side1);
     printf("enter side2:");
    scanf("%d",&side2);
     printf("enter altitude:");
    scanf("%d",&altitude);
     printf("enter floor:");
    scanf("%d",&floor);
	area=floor*altitude/2;
	perimeter=side1+side2+floor;
	printf("area: %d\nperimeter: %d",area,perimeter);
	return 0;
}
