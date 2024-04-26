#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student{
	char name[20];
	char surname[20];
	int no;
	int class;
}person;
int main(int argc, char *argv[]) {
	person damla;

	printf("enter no:");

	scanf("%d",&damla.no);
   if(damla.no==2019){
   	damla.class=5;
	strcpy(damla.name,"Can");
	strcpy(damla.surname,"Boz");
	damla.no=2019;
   	printf("Information:\nName:%s\nSurname:%s\nNo:%d\nClass:%d\n",damla.name,damla.surname,damla.no,damla.class);
   }
	return 0;
}
