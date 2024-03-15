#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dizi[5][50];
	char *first;
	char *second;
	char temp[50];
	printf("enter 5 word:");
	int i;
	for(i=0;i<5;i++){
		gets(dizi[i]);
	}
	for(i=0;i=5;i++){
		first=second=dizi+i;
		while(*second){
			second++;
		}
		second--;
		while(first<second){
			temp[0]=first;
			first=second;
			second=temp[0];
			first++;
	    	second--;
		}
	}
	for(i=0;i<5;i++){
		printf("%s}\n",dizi[i]);
	}
	return 0;
}
