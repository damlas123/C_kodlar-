#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int t,h,e,spc,i;
	int fre=0,c;
	char d[100];
	printf("enter a string:");
	fgets(d,sizeof(d),stdin);
	d[strcspn(d,"\n")]='\0';
	c=strlen(d);
	for(i=0;i<c;i++){
		t=(d[i]=='t' || d[i]=='T');
		h=(d[i+1]=='H'|| d[i+1]=='h');
		e=(d[i+2]=='E' || d[i+2]=='e');
		spc=(d[i+3]==' ' || d[i+3]=='\0');
		if((t && h&& e&& spc)==1){
			fre++;
		}
	}
	printf("the number of the is:%d",fre);
	return 0;
}
