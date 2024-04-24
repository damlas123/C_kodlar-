#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	char surname[10];
	int age;
};
int main(int argc, char *argv[]) {
	struct student damla;
		strcpy(damla.name,"Damla");
		strcpy(damla.surname,"Soylemez");
		damla.age=19;
		printf("%s\t%s%4d",damla.name,damla.surname,damla.age);
	
	return 0;
}
