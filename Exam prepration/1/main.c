#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int studentno;
	printf("enter student number:");
	scanf("%d",&studentno);
	int *array;
	array=(int *)malloc(10*sizeof(int));
	int i=0,binary;
	while(studentno>0){
		binary=studentno%2;
		array[i]=binary;
		studentno/=2;
		i++;
	}
	
	for(i=i-1;i>=0;i--){
		printf("%d",array[i]);
	}
	free(array);
	return 0;
}
