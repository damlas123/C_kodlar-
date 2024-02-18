#include <stdio.h>
#include <stdlib.h>
void timecalculator(double second);
int main(int argc, char *argv[]) {
	double t;
	printf("enter second: ");
	scanf("%lf",&t);
	timecalculator(t);
	return 0;
}
void timecalculator(double second){
	double h=0,m=0,s=0;
	while(second>=3600){
		h++;
		second=second-3600;
	}
	while(second>=60){
		m++;
		second=second-60;
	}
	s=second;
	printf("%.0lf:%.0lf:%.0lf",h,m,s);
}
