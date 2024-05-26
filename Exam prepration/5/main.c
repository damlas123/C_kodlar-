#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee{
	char name[40];
	struct employee *next;
};
typedef struct employee node;
node *head=NULL;
node *tail=NULL;
int creatlist(){
	int a,i;
	printf("enter worker number:");
	scanf("%d",&a);
	node *p;
	for(i=0;i<a;i++){
		
	p=(node *)malloc(sizeof(node));
		printf("enter worker name:");
		scanf("%s",p->name);
		if(head==NULL){
			head=p;
			tail=p;
		}
		else{
			tail->next=p;
			tail=p;
		}
		p->next=NULL;
	}
	return a;
}
void list(){
	node *p;
	p=head;
	while(p!=NULL){
		printf("%s\n",p->name);
		p=p->next;
	}
}
void alphabeticlist(int worker){
	node *p;
	p=head;
	char temp[50];
	int i,j;
	while(p->next!=NULL){
		if(strcmp(p->name,p->next->name)>0){
			strcpy(temp,p->name);
			strcpy(p->name,p->next->name);
			strcpy(p->next->name,temp);
		}
		p=p->next;
	}
}
void reverse(){
	node *previous=NULL;
	node *current=head;
	node *next=NULL;
	while(current !=NULL){
		next=current->next;
		current->next=previous;
		previous=current;
		current=next;
	}
	head=previous;
}
int main(int argc, char *argv[]) {
	int secim,work;
	do{
		printf("enter your choosing:");
		scanf("%d",&secim);
		switch(secim){
			case 1:{
				work=creatlist();
				list();
				break;
			}
			case 2:{
				alphabeticlist(work);
				list();
				break;
			}
			case 3:{
				reverse(work);
				list();
				break;
			}
		case 4:{
			break;
		}
		}
	}while(secim!=4);
	return 0;
}
