#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,n1;
	char op;
	printf("enter operation");
	scanf("%c",&op);
	printf("enter numbers:");
	scanf("%d%d",&n,&n1);
	if(n!=0 && n1!=0){
	 switch(op){
	 	case '+':{
	 		printf("the sum is:%d/%d",n+n1,n*n1);
			break;
		 }
		case '-0':{
			printf("the submussion of is:%d/%d",n-n1,n1*n);
			break;
		}
	 }
		
	}
	else {
		printf("the operating can't be done");
	}
	return 0;
}
