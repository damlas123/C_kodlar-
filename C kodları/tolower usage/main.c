#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//girilen harf k���k harfse hata b�y�k harfse k���k harfe d�nd�ren c dilindeki program� yaz�n�z
	
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
