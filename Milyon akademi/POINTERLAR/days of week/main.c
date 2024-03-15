#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *day[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
	int i;
	
	do{
	printf("enter day number:");
	scanf("%d",&i);	
	}while(i>7 || i<=0);
	printf("%d is the %s day",i,(day[i-1]));
	return 0;
}
