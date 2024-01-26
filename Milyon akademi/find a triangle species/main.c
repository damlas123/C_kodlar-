#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("enter the angular of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180){
		if(a==b && b==c){
			printf("the triangle is eskenar");
		}
		else if(a==b || a==c || b==c){
			printf("ikizkenar");
		}
		else {
			printf("cesitkenar");
		}
	}
	else{
		printf("acilar ucgen  olusturmaz");
	}
	return 0;
}
