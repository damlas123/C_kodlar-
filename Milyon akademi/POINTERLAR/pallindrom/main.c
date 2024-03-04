#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char sentence[100];
	char *p,*p2;
	printf("enter a sentence but max size is 100:");
	gets(sentence);
	for(p2=sentence;*p2;p2++);
	p2--;
	int control=1;
	for(p=sentence;control && p<p2;p++,p2--){
		if(*p != *p2){
			control=0;
		}
	}
	if(control){
		printf("%s is the pallindrom",sentence);
	}
	else{
		printf("%s is not the pallindrom",sentence);
	}
	return 0;
}
