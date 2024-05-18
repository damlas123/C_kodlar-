#include <stdio.h>
#include <stdlib.h>
struct student{
	int no;
	int age;
	char name[40];
	struct student *next;
};
typedef struct student node;
node *head,*newnode;
 node *creatList(node *head){
 	int n,i;
 	node *p;
 	printf("enter student number:");
 	scanf("%d",&n);
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
	printf("enter student name:");scanf("%s",p->name);
	printf("enter student no:");scanf("%d",&p->no);
	printf("enter student age:");scanf("%d",&p->age);
	getchar(); 
 }
 p->next=NULL;
 return head;
  }
void traverList(node *head){
	node *p;

	while(p!=NULL){
		printf("%s %d %d",p->name,p->no,p->age);
		p=p->next;
	}
}
node *addnode(node *head){
	int stdno;
	node *newnode;
	node *p,*q;
	newnode=(node *)malloc(sizeof(node));
	printf("enter student information(name,no,age)");
	scanf("%s%d%d",newnode->name,&newnode->no,&newnode->age);
	p=head;
	printf("enter student number:");
	scanf("%d",&stdno);
	if(p->no==stdno){
		
		newnode->next=p;
		head=newnode;
	}
	else{
		while(p->next!=NULL && p->no!=stdno){
			q=p;
			p=p->next;
		}
		if(p->no==stdno){
			q->next=newnode;
			newnode->next=p;
		}
		else if(p->next==NULL){
			p->next=newnode;
			newnode->next=NULL;
		}
	}
	return head;
}
node *deleted(node *head){
	int stdno;
	node *p,*q;
	printf("enter student no:");
	scanf("%d",stdno);
	p=head;
	if(p->no==stdno){
		head=p->next;
		free(p);
	}
	else{
		while(p->next!=NULL && p->no != stdno){
			q=p;
			p=p->next;
			
		}
		if(p->no==stdno){
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){
			printf("no node found to delete");
		}
	}
	return head;
}
int main(int argc, char *argv[]) {
	node *head;
	int selection;
	do{
	printf("enter selection from menu:\n\n");
	printf("::::MENU:::::");
	printf("\n1-)creat list\t2-)traverse list\t3-)add student\t4-)delete student\t5-)exit");
	scanf("%d",&selection);
	switch(selection){
		case 1:{
			head=creatList(head);
			traverList(head);
			break;
		}
		case 2:{
			traverList(head);
			break;
		}
		case 3:{
			head=addnode(head);
			traverList(head);
			break;
		}
		case 4:{
			head=deleted(head);
			traverList(head);
			break;
		}
		case 5:{
			break;
		}
	}	
	}while(selection!=5);
	return 0;
}
