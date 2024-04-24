#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	struct student{
		char name[10];
		char surname[10];
		int no;
		int age;
	};
	struct student student_1,student_2;
		student_1.no=221;
		strcpy(student_1.name,"Damla");
		strcpy(student_1.surname,"Soylemez");
		student_1.age=19;
	
	student_2=student_1;
	printf("%s\t%s%4d%4d",student_2.name,student_2.surname,student_1.age,student_2.no);
	return 0;
}
