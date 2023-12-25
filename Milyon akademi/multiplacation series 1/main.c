#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	double m=1;
	int n,k;
    printf("enter last value :");
    scanf("%d",&n);
    for(k=2;k<=n;k++){
    	m*=(pow(k,2)-1)/pow(k,2);
	}
	printf("%lf",m);
	return 0;
}
