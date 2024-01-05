#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	// girilen metni harf harf piramit þeklinde yazdýrma
	/*char d[100];
	printf("enter a text:");
	fgets(d,sizeof(d),stdin);
	int i=0,j;
     while(d[i]){
		for(j=0;j<=i;j++){
			printf("%c",d[j]);
		}
	printf("\n");
	i++;
	}*/
	// cümlede terkar eden en çok harfi bulma
	char d[50];
	printf("enter your sentence:");
	gets(d);
	int kucukharf[26];
	int i;
	while(d[i]){
		if(d[i]>='a' && d[i]<='z'){
			kucukharf[d[i-'a']]++;
		}
		i++;
	}
	char encok;
	encok=kucukharf[0];

	char harf;
		for(i=1;i<=26;i++){
		if(kucukharf[i]!=0){
			if(kucukharf[i]>encok){
				encok=kucukharf[i];
				harf=i+'a';
			}
		}
	}
	printf("the most usen word is:%c",harf);
	
	return 0;
}
