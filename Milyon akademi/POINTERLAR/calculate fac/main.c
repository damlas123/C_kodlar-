#include <stdio.h>
#include <stdlib.h>
  int point(int a,int *b){
  	if(a>1){
  		*b =(*b) * (a-1);
  		return point(a-1,b);
	  }
	  else{
	  	return *b;
	  }
  }
int main(int argc, char *argv[]) {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int *p;
	p=&n;
	printf("the factoriel is:%d",point(n,p));
	
	return 0;
}
