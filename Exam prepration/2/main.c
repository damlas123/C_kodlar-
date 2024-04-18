#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	char name[25];
	printf("enter your name:");
	fgets(name,sizeof(name),stdin);
	char *array;
	array=(char *)malloc(25*sizeof(char));

	int i=0,j=0;
	while(name[i]){
	array[j]=name[i];
		j++;
		i++;
	}
	array[j]='\0';
	printf("enter your student number:");
	int studentno;
	scanf("%d",&studentno);
	int sum=0;
	while(studentno>0){
		sum+=studentno%10;
		studentno/=10;
		
	}
	j=0;
	array=(char *)realloc(array,(sum+1)*sizeof(char));
	for(i=0;i<sum;i++){
		if(array[j]=='\0'){
			j=0;
		}
		printf("%c",array[j]);
		j++;
}
	printf("\n");
	free(array);
	
	return 0;
}
