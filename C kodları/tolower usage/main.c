#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//girilen harf küçük harfse hata büyük harfse küçük harfe döndüren c dilindeki programý yazýnýz
	
	char c;
	printf("enter a alphabet:");
    scanf("%c",&c)	;
    if(c>='A' && c<='Z'){
    	printf("the lower of your alpabet is :%c",tolower(c));
	}
    else{
    	printf("error you entered lower lease enter capital alphabet");
	}
return 0;
}
