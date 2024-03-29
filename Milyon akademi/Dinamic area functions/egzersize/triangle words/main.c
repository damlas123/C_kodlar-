#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int j,i;
    chard *metin;
    metin=(char *)malloc(50*sizeof(char));
    printf("enter a word:");
    gets(metin);
    for(i=0;i<strlen(metin);i++){
      for(j=0;j<=i;j++){
      	printf("%c",*(metin+j));
	  }
	  printf("\n");
	}
	
	return 0;
}
