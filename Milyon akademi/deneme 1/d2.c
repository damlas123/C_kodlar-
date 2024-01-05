#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("enter number :");
	scanf("%d %d %d",&a,&b,&c);
	int h,l;
	h=a;
	l=a;
	if(h>b && h>c){
		if(l<b && l>c){
			l=c;
		}
	}
	if(h>b && h>c){
		if(l<c && l>b){
			l=b;
		}
	}
	if(h<b && h>c){
		h=b;
		if(l>c){
			l=c;
		}
	}
	if(h>b && h<c){
		h=c;
		if(l>b){
			l=b;
		}
	}
	if(l>b && c>b)
	{
		l=b;
	}
		if(l>c && b>c)
	{
		l=c;
	}
	printf("lowest:%d highest:%d",l,h);
		return 0;
}
