#include <stdio.h>
#include <stdlib.h>
int bolum(int bol,int bolen){
	if(bolen==0){
		return 0;
	}
	else if(bol-bolen==0){
		return 1;
	}
	else if(bolunen<bolum){
		return 0;
	}
	else{
		return(1+bolum(bol-bolen,bolen));
	}
		
	
}
int main(int argc, char *argv[]) {
	int a,b;
	printf("enter bolunen number:");
	scanf("%d",&a);
	printf("enter bolen number:");
	scanf("%d",&b);
	printf("bolum:%d",bolum(a,b));
	return 0;
}
