#include <stdio.h>
#include <stdlib.h>
void findb(int s,int b);

int main(int argc, char *argv[]) {
	int number,division;
	printf("enter number:");
	scanf("%d",&number);
	printf("enter the divison number:");
	scanf("%d",&division);
	findb(number,division);
	return 0;
}
void findb(int s,int b){
	int i=0;
	while(s>=b){
		i++;
		s=s-b;
	}
	printf("bolum :%d\n",i);
	printf("kalan:%d",s);
}
