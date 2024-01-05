#include <stdio.h>
int main (){
/*	char a;
	printf("enter a;");
	scanf("%c",&a);
	printf("a:%d and %c",a,a);
	int b;
	printf("enter b:");
	scanf("%d",&b);
	printf("%d= %c",b,b);*//*
	int a ,sum=0;
	printf("enter a number:");
	scanf("%d",&a);
	sum=(a/1000)+sum;
	a=a%1000;
	sum=sum+(a/100);
	a=a%100;
	sum=sum+(a/10);
	a=a%10;
	sum=sum+a;
	printf("sum is eqal to :%d",sum);*//*
	int a,b,c,d,h;
	printf("enter your birth year: ");
	scanf("%d",&a);
	b=2023-a;
	printf("enter how many munite you do sport:");
	scanf("%d",&d);
	printf("enter your heart rate:");
	scanf("%d",&c);
	h=d*(220-b);
	if((h*50)/100<=c && (h*80)/100>=c){
		printf("you are healthy:%d",h);
	}
	else{
		printf("you are not healthy you must go to the doctor:%d",h);
	}*//*
	int a,b,c;
	printf("enter a b and c;");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		if(b>c){
			printf("a>b>c");
		}
		else{
			printf("a>c>b");
		}
	}
	if(b>a && b>c){
		if(a>c){
			printf("b>a>c");
		}
		else{
			printf("b>c>a");
		}
		}
			if(c>a && b<c){
		if(a>b){
			printf("c>a>b");
		}
		else{
			printf("c>b>a");
		}
		}*/
	return 0;
}
