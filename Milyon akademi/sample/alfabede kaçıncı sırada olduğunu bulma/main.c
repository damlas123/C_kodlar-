#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a;
	char i;
	printf("enter an alphabet:");
	scanf("%c",&i);
	if(i>='A'&& i<='Z'){
		a  = (int)i-(int)'A'+1;
		printf("the place this alphabet is:%d",a);
		
	}
	else{
		a  =(int)i-(int)'a'+1;
		printf("the place this aplhabet is:%d",a);
	}
	return 0;
}
