#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char d[50],d2[50];
	printf("enter a string:");
	fgets(d,sizeof(d),stdin);
	strcat(d2,d);
	printf("%s",d2);
	return 0;
}
