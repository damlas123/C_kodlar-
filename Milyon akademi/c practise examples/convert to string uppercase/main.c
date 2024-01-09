#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char array[100];
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	printf("the converting uppercase letter is:%s",strupr(array));
    printf("the converting lowercase letter is:%s",strlwr(array));
  
	return 0;
}
