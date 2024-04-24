#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char name[10];
	float x;
	float y;
}point;
void printscreen(point p[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%s=(%f,%f)",p[i].name,p[i].x,p[i].y);
		printf("\n");
	}
}
int main() {
	point damla[5]={{"Damla",3,4},{"Alara su",2,1},{"Yusuf",7,9},{"Kubra",1,17},{"Emirhan",34,23}};
	printscreen(damla,5);
	return 0;
}
