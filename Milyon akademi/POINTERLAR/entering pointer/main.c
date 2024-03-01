#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int can=20;
	int *p;
	p=&can;
	printf("%d\n",*p);
	printf("%d\n",can);
	printf("%d\n",p);
	printf("%d\n",&can);
	return 0;
}
