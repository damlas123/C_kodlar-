#include <stdio.h>
#include <stdlib.h>

long power(int m,int n1);
void prn_heading(void);
void prn_tablesof_Power(int b);

int main(int argc, char *argv[]) {
	int b;
	prn_heading();
	b=7;
	prn_tablesof_Power(b);
	return 0;
}
void prn_heading(void){
	printf("\t:::: TABLE OF POWER ::::\t\n\n");
}
void prn_tablesof_Power(int b){
	int i,j;
	for(i=0;i<b;i++){
		for(j=1;j<=b;j++){
			if(j==1){
				printf("%ld",power(i,j));
			}
			else{
				printf("%9ld",power(i,j));
			}
		}
			printf("\n");
	}
}
long power(int m,int n1){
	int p=1,i;
	for(i=0;i<n1;i++){
		p*=m;
	}
	return p;
}
