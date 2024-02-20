#include <stdio.h>
#include <stdlib.h>
int mult(int a,int b){
	int sonuc=0;
	if(a!=1)
{   
	sonuc=sonuc+b+mult(a-1,b);
}
 else{
 	sonuc=b;
 }
 return sonuc;

 }

int main(int argc, char *argv[]) {
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("%d*%d=%d",a,b,mult(a,b));
	return 0;
}
