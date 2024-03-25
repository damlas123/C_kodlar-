#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int *p;
	//p=malloc(10*sizeof(int));
	p=malloc(40);
	int *p2;
	p2=calloc(10,sizeof(int));
	printf("%d\n",p[0]);
	printf("%d\n",p2[0]);
	p[0]=4;
	p2[0]=6;
	printf("%d\n",p[0]);
	printf("%d\n",p2[0]);
	free(p);
	free(p2);
	return 0;
}
