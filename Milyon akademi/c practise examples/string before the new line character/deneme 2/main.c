#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0;
	char array[]="yine asik olur yine her seyi mahvederiz \n ama artık cok gec my dear";
	while(array[i]){
		if( array[i]=='\n'){
			break;
		}
		i++;
	}
	array[i]='\0';
	printf("%s",array);
	return 0;
}
