#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *p;
	p=(char *)calloc(100,sizeof(p));
	printf("enter a text:");
    gets(p);
	printf("the text is:%s",p);
	return 0;
}
