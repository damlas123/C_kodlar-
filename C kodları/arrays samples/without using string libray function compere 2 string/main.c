#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char d[50],d2[50];
	printf("enter first string:");
	fgets(d,sizeof(d),stdin);
	printf("enter second string:");
	fgets(d2,sizeof(d2),stdin);
	int i=0;
	while(d[i]!='\0' || d2[i]!='\0'){
		if(d2[i]!=d[i])
		{
			printf("they are not equal");
			return 0;
		}
			i++;
	
		}
	
	
	printf("they are equal");
	return 0;
}
