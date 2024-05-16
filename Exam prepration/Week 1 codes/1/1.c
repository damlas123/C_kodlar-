#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 7
long power(int,int);
void prn_head(void);
void prn_head_of_table(int n);
int main(int argc, char *argv[]) {
	prn_head();
	prn_head_of_table(N);
	return 0;
}
void prn_head(void){
	printf("\n:::::: TABLE OF POWERS ::::::\n\n");
}
void prn_head_of_table(int n){
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1){
				printf("%ld",power(i,j));
			}
			else{
				printf("%9ld",power(i,j));
			}
			
		}
		putchar('\n');
	}
}
long power(int a,int b){
	long product=1; 
	int i;
	for(i=1;i<=b;i++){
		product*=a;
	
	}
		return product;
	
}
