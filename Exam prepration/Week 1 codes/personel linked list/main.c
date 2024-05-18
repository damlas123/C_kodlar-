#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct personel{
	char name[21];
	struct personel *next;
};
 typedef struct personel node;
 node *head,*oncekidugum,*newnode,*deleted1;
 void search(char *aranan){
 	node *p;
 	p=head;
 	oncekidugum=head;
    while(p->next!=NULL){
    	p=p->next;
    	if(strcmp(p->name,aranan)>=0)
    	break;
    	oncekidugum=p;
	}
 }
 void add(char *s){
 	newnode=(node *)malloc(sizeof(node));
 	strcpy(newnode->name,s);
 	search(newnode->name);
 	newnode->next=oncekidugum->next;
 	oncekidugum->next=newnode;
 }
 void deleted(char *s){
 	search(s);
 	deleted1=oncekidugum->next;
 	oncekidugum->next= deleted1->next;
 	free(deleted1);
 }
 void list(void){
 	node *p;
 	p=head;
 	p=p->next;
 	while(p!=NULL){
 		printf("%s\n",p->name);
 		p=p->next;
	 }
 }
 void longest(void){
 	node *p,*longes;
 	p=head;
 	p=p->next;
 	longes=p;
 	while(p!=NULL){
 		if(strlen(p->name)>=strlen(longes->name)){
 			longes=p;
		 }
		 p=p->next;
	 }
	 printf("\nThe longest :%s long:%ld\n",longes->name,strlen(longes->name));
 }
int main(int argc, char *argv[]) {
	char sec;
	char s[21];
	head = (node *)malloc(sizeof(node));  
	head->next=NULL;
	do{
		list();
		printf("\n\n1-)Add\t2-)Delete\t3-)The longest name\t4-)Exit\n\nchoose:");
		scanf("%c",&sec);
		getchar();
		switch(sec){
		case '1':printf("\nName:");
		fgets(s,sizeof(s),stdin);
		add(s);break;
		case '2':{
			printf("\nName:");	
			fgets(s,sizeof(s),stdin);
			deleted(s);
			break;
		}
		case '3':{
			longest();
			break;
		}
		case '4':exit(0);break;
		}
	}while(1);
	return 0;
}
