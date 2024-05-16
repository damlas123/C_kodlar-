#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char *a="1234567890";
	char *p1,*p2;
	char x[10];
	p1=a;
	p2=x;
	while(*p1!='0'){
		*p2=*p1;
		p1++;
		p2++;
	}
	*p2=*p1;
	printf("%s\n",x);
	getchar();
	return 0;
}
