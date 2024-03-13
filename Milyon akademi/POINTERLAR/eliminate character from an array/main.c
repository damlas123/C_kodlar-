#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[100];
	char character;
	char *p;
	printf("enter the sentence:");
	gets(array);
	printf("enter the characher:");
	scanf("%c",&character);
	p=array;
	while(*p){
		if(character==*p){
			strcpy(p,p+1);
		}
		else{
			p++;
		}
	}
	printf("the new sentence is:%s",array);
	
	return 0;
}
