#include <stdio.h>
#include <stdlib.h>
 struct student {
 	int no;
 	char name[40];
 	int age;
 	struct student *next;
 };
 typedef struct student node;
 node *head,*newnode;
 node *createList(){
 	int i,n;
 	node *head,*p;
 	printf("enter student number:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
 		if(i==1){
 			head=(node *)malloc(sizeo(node));
 			p=head;
		 }
		 else{
		 p->next=(node *)malloc(sizeof(node));
		 p=p->next;
		 }
		 printf("enter student no:");scanf("%d",&p->no);
		 printf("enter student number:");scanf("%d",p->name);
		 printf("enter student age:");scanf("%d",&p->age);
	 }
	 p->next=NULL;
	 return head;
 }
 void traverseList(node* head){
 	int counter=1;
 	node *p;
 	p=head;
 	while(p!=NULL){
 		printf("%d- %d %s %d \n",counter,p->no,p->name,p->age);
 		p=p->next;
 		counter++;
	 }
 }
 node* addNode(node* head){
 	int stdNo;
 	node *p,*q;
 	node *newnode=(node *)malloc(sizeof(node));
 	printf("enter tnew student number:");scanf("%d",&newnode->no);
 	printf("enter new student name:");scanf("%s",newnode->name);
 	printf("enter new student age:");scanf("%d",&newnode->age);
 	
 	printf("enter std number that new record will be added before:\n");
 	printf("press to 0 to add to the nd of list\n");
 	scanf("%d",&stdNo);
 	p=head;
 	if(p->no==stdNo){
 		newnode->next=p;
 		head=newnode;
	 }
	 p=head;
	 if(p->no==stdNo){
	 	newnode->next=p;
	 	head=newnode;
	 }
	 else{
	 	while(p->next!=NULL && p->no !=stdNo){
	 		q=p;
	 		p=p->next;
		 }
		 if(p->no==StdNo){
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
int main() { 
	
	return 0;
}
