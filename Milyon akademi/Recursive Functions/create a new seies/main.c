#include <stdio.h>
#include <stdlib.h>

int series(int f,int e,int i){
	int d=f;
	if(f>e){
		exit;
	}
	else{
		printf("%d\n",d);
		d=series(f+i,e,i);
	}
	return d;
}
int main(int argc, char *argv[]) {
	int first,end,in;
	printf("enter first value:");
	scanf("%d",&first);
	printf("enter last value:");
	scanf("%d",&end);
	printf("enter the increasing value:");
	scanf("%d",&in);
	series(first,end,in);
	
		return 0;
}
