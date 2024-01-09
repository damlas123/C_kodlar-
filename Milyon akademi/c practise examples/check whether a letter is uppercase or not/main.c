#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char character;
	printf("enter a character:");
	scanf("%c",&character);
	if(character>='A' && character <='Z'){
		printf("this is an uppercase letter");
	}
	else{
		printf("this is not an uppercase charcter");
	}
	return 0;
}
