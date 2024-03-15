#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char array[18]={'r','e','n','k','l','i','r','u','y','a','l','a','r','o','t','e','l','i'};
    char copy_Dizi[18];
    char *p;
    char *p2;
    p=array;
    for(p=array,p2=copy_Dizi;*p;p++,p2++){
    	*p2=*p;
	}
	*p2='\0';
	printf("the real sentence:");
	for(p=array;*p;p++){
		printf("%c",*p);
	}
	
	printf("\nafter copying the copy array:");
	for(p2=copy_Dizi;*p2;p2++){
		printf("%c",*p2);
	}

	return 0;
}
