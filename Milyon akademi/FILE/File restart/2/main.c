#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *myptr;
	int number,i,n;
	char name[20];
	printf("enter student number:");
	scanf("%d",&n);
	if((myptr=fopen("my.txt","w"))==NULL){
	printf("the file can't created");
	}
	else{
	 for(i=0;i<n;i++){
	 	printf("enter student name:");
	 	scanf("%s",name);
	 	fprintf(myptr,"%s\t",name);
	 	printf("enter student number:");
	 	scanf("%d",&number);
	 	fprintf(myptr,"%d\n",number);
	 }
	}
	fclose(myptr);
	myptr=fopen("my.txt","r");
	if(myptr==NULL){
		printf("the file is null");
	}
	else{
		printf("NAME\tNumber\n");
		while(fscanf(myptr,"%s\t%d\n",name,&number)!=EOF){
			printf("%s\t%d\n",name,number);
		}
	}
	fclose(myptr);
	return 0;
}
