#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char array[100],length[256]={0};
	int i;
	printf("enter a string:");
	fgets(array,sizeof(array),stdin);
	array[strcspn(array,"\n")]='\0';
	strupr(array);
	while(array[i]){
		if(array[i]>='A' && array[i]<='Z'){
			length[(int)array[i]]++;
		}
		i++;
	}
	for(i<0;i<256;i++){
		if(length[i]>0){
			printf("%c:%d times\n",(char)i,length[i]);
		}
	}
	return 0;
}
