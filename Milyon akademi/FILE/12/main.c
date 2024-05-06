#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	int *p,n;
	FILE *d1;
	printf("enter number of digit:");
	scanf("%d",&n);
	int i,digit;
	srand(time(0));
	d1=fopen("information.txt","w");
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		*(p+i)=rand()%100;
		fprintf(d1,"%d\t",*(p+i));
		printf("%d\t",*(p+i));
	}
	fclose(d1);
	printf("\n");
	d1=fopen("information.txt","r");
	if(d1==NULL){
		printf("the file can't be read");
	}
	else{
		do{
		
		digit=getc(d1);
		if(digit!=EOF){
			putchar(digit);
		}
	}while(digit!=EOF);
	}
	fclose(d1);
	return 0;
}
