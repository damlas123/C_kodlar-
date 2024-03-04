#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int p1=10;
	int *p ;
	p=&p1;
	char c='c';
	char *s;
	s=&c;
	float d=15.45;
	float *f1;
	f1=&d;
	double l=45.145;
	double *lf1;
	lf1=&l;
	printf("%d\n",*p);
	
	printf("%d\n",p);
	
	printf("%c\n",*s);
	
	printf("%c\n",s);
	
	printf("%f\n",*f1);
	
	printf("%f\n",f1);
	
	printf("%lf\n",*lf1);
	
	printf("%lf\n",lf1);
	return 0;
}
