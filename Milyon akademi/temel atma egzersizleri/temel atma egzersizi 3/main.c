#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		if(b>c){
			printf("the highest number is:%d\n",a);
			printf("the smallest number is:%d",c);
		}
		else if(c>b){
			printf("the highest number is:%d\n",a);
			printf("the smallest number is:%d",b);
		}
		else {
			printf("the highest number is:%d\n",a);
			printf("b and c equal and they are smallest number:%d",c);
		}
		}
			
		
		
	    else if(b>a && b>c){
		if(a>c){
			printf("the highest number is:%d\n",b);
			printf("the smallest number is:%d",c);
		}
		else if(c>a){
			printf("the highest number is:%d\n",b);
			printf("the smallest number is:%d",a);
		}
		else {
			printf("the highest number is:%d\n",b);
			printf("a and c equal and they are smallest number:%d",c);
		}
		}
			
		
	
	   else	if(c>b && a<c){
		if(b>a){
			printf("the highest number is:%d\n",c);
			printf("the smallest number is:%d",a);
		}
		else if(a>b){
			printf("the highest number is:%d\n",c);
			printf("the smallest number is:%d",b);
		}
		else {
			printf("the highest number is:%d\n",c);
			printf("b and a equal and they are smallest number:%d",a);
		}
		}
			
		
	else {
		printf("they are equal :%d",a);
	}
	
	return 0;
}
