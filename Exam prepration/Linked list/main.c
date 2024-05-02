#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[20];
	int midterm;
	int final;
	struct student *next;
};
typedef struct student node;
node *head,*newnode,*oldnode,*succesful;
void creatlist(){
	int n,i;
	printf("how many studetn in the cass:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			newnode=(node *)malloc(sizeof(node));
			head=newnode;
		}
		else{
			newnode->next=(node *)malloc(sizeof(node));
			newnode=newnode->next;
		}
		printf("enter student name:");scanf("%s",newnode->name);
		printf("enter student midterm exam result:");scanf("%d",&newnode->midterm);
		printf("enter student final exam result:");scanf("%d",&newnode->final);
	}
}
void list(){
	node *p;
	p=head;
	while(p!=NULL){
		printf("Student name:%s\tStudent midterm result:%d\tStudent final result:%d\n",p->name,p->midterm,p->final);
		p=p->next;
	}
}
double calculate (int s1,int s2){
	return (s1*0.4)+(s2*0.6);
}
void findsuccesfull(){
	node *p;
	p=head;
	succesful=head;
	while(p!=NULL){
		if(calculate(p->midterm,p->final)>calculate(succesful->midterm,succesful->final)){
			succesful=p;
		}
		p=p->next;
	}
	printf("Most succesful student name is:%s\tThe note:%.2lf\n",succesful->name,calculate(succesful->midterm,succesful->final));
}
void avarage(){
	double toplam=0,ort=0;
	int counter=0;
	node *p;
	p=head;
	while(p!=NULL){
		 toplam +=calculate(p->midterm,p->final);
		counter++;
	}
	ort=toplam/counter;
	printf("\nThe Avarage is:%2.lf",toplam);
}
int main(int argc, char *argv[]) {
	int op;
	printf("enter whih operation do you want to do:\n1-Creat list\t2-List student list\t3-Find most succesful student\t4-Find avarage\t5-Exit the program");
	scanf("%d",&op);
	while(1){
		switch(op){
			case 1:{
				creatlist();
				scanf("%d",&op);
				break;
			}
			case 2:{
				printf("\n*************THE LIST*******************\n");
				list();
				scanf("%d",&op);
				break;
			}
			case 3:{
				findsuccesfull();
				scanf("%d",&op);
				break;
			}
			case 4:{
				avarage();
				scanf("%d",&op);
				break;
			}
			case 5:{
				exit(0);
				break;
			}
		}
	}
	return 0;
}
