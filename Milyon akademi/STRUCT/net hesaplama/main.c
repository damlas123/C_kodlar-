#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
	int student_number;
	char answer[10];
};
struct note{
	int neti;
};
int main(int argc, char *argv[]) {
    struct student array[30];
    int i,j;
    struct note net[10];
    char answer_array[10];
    for(i=0;i<10;i++){
    	printf("enter %d answer\n",i+1);
    	scanf("%s",&answer_array[i]);
    	getchar();
	}
    for(i=0;i<30;i++){
    	printf("enter student number:");
    	scanf("%d",&array[i].student_number);
    	net[i].neti=0;
    	for(j=0;j<10;j++){
    		printf("enter answer:");
    		scanf("%s",&array[i].answer[j]);
    		getchar();
		}
		for(j=0;j<10;j++){
			if(answer_array[j]==array[i].answer[j]){
			 net[i].neti++;
			}
		}
	}
	printf("************the grade*****************\n");
	for(i=0;i<30;i++){
		printf("%d\t%d",array[i].student_number,net[i].neti);
		printf("\n");
	}
	return 0;
}
