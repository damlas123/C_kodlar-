#include <stdio.h>
#include <stdlib.h>
struct number{
	int n;
	struct number *next;
};
typedef struct number node;
node *head=NULL;
node *tail=NULL;
void add_begin(int);
void list();
void add_end(int);

int main(int argc, char *argv[]) {
	int num;
	do{
		printf("enter a number:");
		scanf("%d",&num);
		if(num%2==0){
			add_begin(num);
		}
		else{
			add_end(num);
		}
	}while(num!=-1);
	list();
	return 0;
}
void add_begin(int a){
	node *p;
	p=(node *)malloc(sizeof(node));
	p->n=a;
	p->next=head;
	head=p;
	
	if(tail==NULL){
		tail=p;
	}
}
void add_end(int a){
	node *p;
	p=(node *)malloc(sizeof(node));
	p->n=a;
	p->next=NULL;
	if(tail!=NULL){
		tail->next=p;
	}

		tail=p;
		if(head==NULL){
			head=p;
		}
}
void list(){
	node *p;
	p=head;
	while(p->next!=NULL){
		printf("%d\n",p->n);
		p=p->next;
	}
}
