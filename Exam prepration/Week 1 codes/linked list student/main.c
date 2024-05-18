#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[21];
	int no;
	int midterm;
	int final;
	struct student *next;
};
typedef struct student node;
node *head,*newnode,*oldnode,*succesfulone;

void studentcreate(){
	int n,i;
	printf("enter student number:");
	scanf("%d",&n);
	node *p;
	for(i=0;i<n;i++)
{
	if(i==0){
		head=(node *)malloc(sizeof(node));
		p=head;
	}
	else{
		p=(node *)malloc(sizeof(node));
		p=p->next;
	}
	printf("enter student name:");
scanf("%s",p->name);getchar();
 printf("enter student no:");scanf("%d",&p->no);
 printf("enter student midterm :");scanf("%d",&p->midterm);
 printf("enter student final exam:");scanf("%d",&p->final);
 getchar();
}
p->next=NULL;
}
void list(){
	node *p;
	p=head;
	while(p->next!=NULL){
		printf("\n*****************************\n");
		printf("student name:%s\tstudent no:%d\tstudent midterm result:%d\tstudent final result:%d",p->name,p->no,p->midterm,p->final);
		p=p->next;
		printf("\n");
	}
}
 void add(){
 	int stdno;
 	node *p,*q;
 	printf("enter new student name:");scanf("%s",newnode->name);getchar();
 	printf("enter new student no");scanf("%d",&newnode->no);
 	printf("enter new student midterm:");scanf("%d",&newnode->midterm);
 	printf("enter new student final:");scanf("%d",&newnode->final);
 	
 	printf("enter which no do you want to add(press zero for end of the list)");
 	scanf("%d",&stdno);
 	p=head;
 	if(p->no==stdno){
 		newnode->next=p;
 		head=newnode;
	 }
 	else{
 		while(p->next!=NULL){
 			q=p;
 			p=p->next;
		 }
		 if(p->next==stdno){
		 	q->next=newnode;
		 	newnode->next=p;
		 }
		 else if(p->next==NULL){
		 	p->next=newnode;
		 	newnode->next=NULL;
		 }
	 }
 }
 void deletedstudent(){
 	int stdno;
 	node *p,*q;
 	printf("enter student no which be deleted:");
 	scanf("%d",&stdno);
    p=head;
    if(stdno==p->no){
    	head=p->next;
    	free(p);
	}
	else{
		while(p->next!=NULL){
			q=p;
			p=p->next;
		}
		if (p->next!=NULL){
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){
			printf("there is no student that deleted\n");
		}
	}
 }
 double finsuccesful(int mid,int fin){
 	return mid*0.4+fin*0.6;
 }
 void findsuccesfulstudent(){
 	int basari=0;
 	node *p;
 	p=head->next;
 	succesfulone=head;
 	while(p->next!=NULL){
 		if(finsuccesful(p->midterm,p->final)>finsuccesful(succesfulone->midterm,succesfulone->final)){
 			succesfulone=p;
 			basari=finsuccesful(succesfulone->midterm,succesfulone->final);
		 }
		 p=p->next;
	 }
	printf("\nTHE MOST SUCCESFUL STUDENT INFORMATION\n");
	printf("name:%s\tstudent no:\tortalamasi:%lf",succesfulone->name,succesfulone->no,basari);
 }
 void avarage(){
 	double toplam=0,avarage=0;
 	int counter=0;
 	node *p;
 	p=head;
 	while(p->next!=NULL){
 		toplam+=finsuccesful(p->midterm,p->final);
 		counter++;
 		p=p->next;
	 }
	 avarage=toplam/counter;
	 printf("\nTHE AVARAGE OF CLASS\n");
	 printf("%lf",avarage);
 }
int main(int argc, char *argv[]) {
	node *head;
	printf("MAKE AN CHOOSE FROM MENU:");
	int selection;
	printf("\n***************MENU**************\n");
	printf("1-)Create class\n2-)Add New student\n3-)Delete student\n4-)Show the succesful student\n5-)Show the avarage\n6-)exit");
	scanf("%d",&selection);
	do{
		switch(selection){
			case 1:{
				studentcreate();
					list();
						printf("\n***************MENU**************\n");
	printf("1-)Create class\n2-)Add New student\n3-)Delete student\n4-)Show the succesful student\n5-)Show the avarage\n6-)exit");
	scanf("%d",&selection);
				break;
			}
			case 2:{
				add();
				list();
				printf("\n***************MENU**************\n");
            	printf("1-)Create class\n2-)Add New student\n3-)Delete student\n4-)Show the succesful student\n5-)Show the avarage\n6-)exit");
	            scanf("%d",&selection);
				break;
			}
			case 3:{
				deletedstudent();
				list();
				printf("\n***************MENU**************\n");
	            printf("1-)Create class\n2-)Add New student\n3-)Delete student\n4-)Show the succesful student\n5-)Show the avarage\n6-)exit");
             	scanf("%d",&selection);
					
				break;
			}
			case 4:{
				findsuccesfulstudent();
				printf("\n***************MENU**************\n");
	            printf("1-)Create class\n2-)Add New student\n3-)Delete student\n4-)Show the succesful student\n5-)Show the avarage\n6-)exit");
	            scanf("%d",&selection);
					list();
				break;
			}
			case 5:{
				avarage();
					list();
			printf("\n***************MENU**************\n");
        	printf("1-)Create class\n2-)Add New student\n3-)Delete student\n4-)Show the succesful student\n5-)Show the avarage\n6-)exit");
	        scanf("%d",&selection);
				break;
			}
			case 6:{
				printf("\nThanks for using the application\n");
				break;
			}
		}
	}while(selection!=6);
	
	return 0;
}
