#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char array[100];
	printf("enter the sentence:");
	fgets(array,sizeof(array),stdin);
	int counter=0;
    int *p;
    int c=0;
    for(p=array;*p;p++){
    	c++;
	}
	printf("the length of array: %d ",c);

	return 0;
}
