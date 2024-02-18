#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void series(int seri);
int main(int argc, char *argv[]) {
	int n;
	printf("enter the last value:");
	scanf("%d",&n);
	series(n);
	return 0;
}
void series(int seri){
	int a=1,b=1,c=2,counter=1,mul=1;
	int sum;
	while(a<=seri){
		while(counter<=c){
		mul*=b;
		counter++;
		}
		sum+=mul;
		mul=1;
		counter=1;
		b++;
		a++;
	}
	printf("the sum of series is:%d",sum);
}
