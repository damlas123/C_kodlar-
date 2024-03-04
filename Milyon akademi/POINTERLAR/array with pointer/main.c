#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
/*	int t[100];
	int i;
	int *p;
	for(p=t;p<t+100;p++){
		printf("%d\n",p);
		*p=0;
		printf("%d\n",*p);
	}*/
	char name[20]={'b','o','n','j','o','u','r','\0'};
	char *can;
	can=name;
	printf("%c",*(can+2));
	return 0;
}
