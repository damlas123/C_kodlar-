#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	char d[50];
	
	printf("enter a string:");
	fgets(d,sizeof(d),stdin);
	int i=0;
	char encok;
	char kucukharf[26]={0};
	char harf;
	while(d[i]){
		if(d[i]>='a' && d[i]<='z'){
			kucukharf[d[i]-'a']++;
		}
		i++;
	}
	encok=kucukharf[0];
	for(i=1;i<26;i++){
		if(kucukharf[i]!=0){
			if(kucukharf[i]>encok){
			encok=kucukharf[i];
			harf=i+'a';
		}
		}
		
	}
	printf("the highest frequency word is:%c ",harf);
	return 0;
}
