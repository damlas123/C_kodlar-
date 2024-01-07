#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int i=0;
	char kucukharf[26]={0};
    char harf,dizi[50];
    printf("enter a string:");
    fgets(dizi,sizeof(dizi),stdin);
    strlwr(dizi);
	    while(dizi[i]){
    	if(dizi[i]>='a' && dizi[i]<='z'){
    		kucukharf[dizi[i]-'a']++;
		}
		i++;
	}
	char encok=kucukharf[0];
	for(i=1;i<26;i++){
		if(kucukharf[i]!=0){
			if(encok<kucukharf[i]){
				encok=kucukharf[i];
				harf=i+'a';
			}
		}
	}
	printf("the highest frequency alphabet is:%c",harf);
	return 0;
}
