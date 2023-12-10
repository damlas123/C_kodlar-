#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {/*
	int day;
	printf("which day you are in:");
	scanf("%d",&day);
	switch(day){
		case 1:printf("monday");break;
		case 2:printf("tuesday");break;
		case 3:printf("wednesday");break;
		case 4:printf("thursday");break;
		case 5:printf("friday");break;
		case 6:printf("saturday");break;
		case 7:printf("sunday");break;
		default:printf("you entered wrong day number");break;
	}*/
	float s,s2;
	char operator;
	printf("which mathematical operator do you want to use:");
	scanf("%c",&operator);

	printf("enter 2 number:");
	scanf("%f %f",&s,&s2);
	
	switch(operator){
		case '+':printf("%.1f + %.1f =%.2f",s,s2,s+s2);break;
		case '-':printf("%.1f - %.1f =%.2f",s,s2,s-s2);break;
		case '*':printf("%.1f * %.1f =%.2f",s,s2,s*s2);break;
		case '/':printf("%.1f / %.1f =%.2f",s,s2,s/s2);break;
		default:printf("you entered wrong operator");break;
	}
	return 0;
}
