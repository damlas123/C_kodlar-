#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char d[50];
	printf("enter a string:");
	fgets(d,sizeof(d),stdin);
	int i=0,a=0,n=0,s=0;
	strupr(d);
	while(d[i]){
		if(d[i]>='A' && d[i]<='Z'){
			a++;
			
		}
		else if(d[i]>='0' && d[i]<='9'){
			n++;
		}
		else{
			s++;
		}
		i++;
	}
	printf("the number of alphabet is:%d\nthe number of digit is :%d\nthe number of special character is:%d",a,n,s);
	return 0;
}
