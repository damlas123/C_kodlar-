#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char dizi[100],dizi2[100];
	int i,f=0,a,n,j;
	printf("enter your string:");
	fgets(dizi,sizeof(dizi),stdin);
	printf("enter which word do you search:");
	fgets(dizi2,sizeof(dizi2),stdin);
	dizi[strcspn(dizi,"\n")]='\0';
	dizi2[strcspn(dizi2,"\n")]='\0';
	a=strlen(dizi);
	n=strlen(dizi2);
	for(i=0;i<=a-n;i++){
	f=1;
	for(j=0;j<n;j++){
		if(dizi[j+i]!=dizi2[j]){
			f=0;
		break;
		}
	}
	if(f==1){
	break;
	}
	}
	if(f==0){
		printf("this word is not exist in this string");
		
	}
	else{
		printf("this is word exist in the string");
	}
	return 0;
}
