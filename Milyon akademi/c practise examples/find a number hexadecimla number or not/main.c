#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
char character ;
printf("enter a number:");
scanf("%c",&character);
  if(character>='0' &&character<='9'||
  	topupper(character)>='A' && toupper(character)<='F'){
  		printf("it is a hexadecimal character");
	  }
	else{
		printf("it is not a hexadecimal character");
	}
  

	return 0;
}
