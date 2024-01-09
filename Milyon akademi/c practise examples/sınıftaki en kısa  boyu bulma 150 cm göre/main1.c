#include <stdio.h>
#include <stdlib.h>
#define tam 150

int main(int argc, char *argv[]) {

	int boy,no,minno,minboy,fark;
	printf("enter student number:");
	scanf("%d",&no);
	printf("enter high of this student:");
	scanf("%d",&boy);
	fark=abs(boy-tam);
	minno=no;
	while(no>0){
		printf("enter student number:");
		scanf("%d",&no);
		if(no<0){
			break;
		}
		printf("enter this student high:");
		scanf("%d",&boy);
		if(fark>abs(boy-tam)){
			fark=abs(boy-tam);
			minno=no;
		}
	}
	printf("the nearest high of 150 cm is %d no student and the difference is:%d",minno,fark);

	return 0;
}
