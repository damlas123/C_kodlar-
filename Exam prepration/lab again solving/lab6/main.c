#include <stdio.h>
#include <stdlib.h>
struct number{
	int digit;
	struct number *next;
 };
 typedef struct number node;
 void add_to_head(int n);
 void add_to_tail(int n);
 void list();
 node *head=NULL;
 node *tail=NULL;
 int main(){
 
   int num;
   while(1){
   	printf("enter number:");
	   scanf("%d",&num);
	   if(num==-1){
	   break;
	   }
	   if(num%2!=0){
	   	add_to_head(num);
	   }
	   else{
	   	add_to_tail(num);
	   }
   }
   list();
 
 return 0;
 }
 void add_to_head(int n){
 	node *newnode;
 	newnode=(node *)malloc(sizeof(node));
 	newnode->digit=n;
 	newnode->next=head;
 	head=newnode;
 	if(tail==NULL){
 		tail=newnode;
	 }
 }
 void add_to_tail(int n){
 	node *newnode;
 	newnode=(node *)malloc(sizeof(node));
 	newnode->digit=n;
 	newnode->next=NULL;
 
 	if(tail==NULL){
 		head=newnode;
 		tail=newnode;
 	
	 }
	 else{
	 tail->next=newnode;
	 tail=newnode;
	 
	 }
 }
 void list(){
 	node *current;
 	current=head;
 	while(current->next!=NULL){
 		printf("%d\n",current->digit);
 		current=current->next;
	 }
 }
