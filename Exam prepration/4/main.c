#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sum=0,i=0,stdno,j=0;
	char *p;

	printf("enter student number:");
	scanf("%d",&stdno);
	while(stdno!=0){
		sum+=stdno%10;
		stdno/=10;
	}
	
	p=(char *)malloc(sum*sizeof(char));
	
	char name[]={"damla"};
	p=name;
	for(i=0;i<sum;i++){
		if(j==5){
			j=0;
		}
		printf("%c",p[j]);
		j++;
	}
	free(p);
	return 0;
}
