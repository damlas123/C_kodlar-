#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char d[100],max[100],min[100];
	printf("enter a string:");
	fegts(d,sizeof(d),stdin);
	int i,c,a=0,j;
	d[strcspn(d,"\n")]='\0';
	
	c=strlen(d);
	max[0]='\0';
	min[0]='\0';
	for(i=0;i<=c;i++){
			if(d[i]!= '\n' && d[i]!= '\0'){
				a++;
			}
			else{
				if(strlen(max)==0 || strlen(max)<a){
			    strcpy(max,&d[i-a]);
				}
				else if(strlen(min)>a || strlen(min)==0){
					strcpy(min,&d[i-a]);
				}
				a=0;
			}
		}
	
		printf("the max word is:%s and the min word is :%s",max,min);
	
	return 0;
}
