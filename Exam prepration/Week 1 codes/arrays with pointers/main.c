#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i[10];
	int j;
	for(j=0;j<10;j++){
		i[j]=j;
	}
	int *iptr;
	iptr=i;
	for(j=0;j<10;j++){
		printf("%d\n",*iptr);
	   iptr++;
	}
	printf("%d\n",*(iptr-1));
	iptr=i;
	for(j=0;j<10;j++){
		printf("%d\n",*(iptr+j));
	}
	printf("%d",*iptr);
	return 0;
}
