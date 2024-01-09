#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char d[50],d1[50];
	int i,j=0,n;
	printf("enter your string:");
	fgets(d,sizeof(d),stdin);
	printf("enter how many character do you want to extract:");
	scanf("%d",&n);
	printf("enter how many charachter do you want to copy:");
	scanf("%d",&i);
	while(j<i){
		d1[j]=d[n+j-1];
		j++;
	}
	d1[j]='\0';
    printf("your string which is copied: %s",d1);
   
	
	return 0;
}
