#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *myptr;
	int i,n;
	if((myptr=fopen("my.txt","r"))==NULL){
		printf("the file can't created");
	}
	else{
		for(i=0;i<10;i++){
		
			fscanf(myptr,"%d",&n);
			printf("%d\n",n);
		}
	}
	fclose(myptr);
	return 0;
}
