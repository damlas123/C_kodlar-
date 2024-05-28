#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[40];
	int number;
	int final;
	int midterm;
	struct student *next;
};
typedef struct student node;
node *head=NULL;
node *tail=NULL;
void find_succesful();
void list();
void add_new_record();
void update();
int calculation(int ,int);
void  calculate_avarage();
int main(int argc, char *argv[]) {
	int secim;
		printf("MENU\n\n1-)Add new rcord\n2)-List\n3-)Update Record\n4-)Calculate Avarage\n5-)Find most succesful student\n");
		printf("enter your selection:");
		scanf("%d",&secim);
	do{
		switch(secim){
			case 1:{
				add_new_record();
		printf("enter your selection:");
		scanf("%d",&secim);
				break;
			}
			case 2:{
				list();	
				printf("enter your selection:");
		scanf("%d",&secim);
				break;
			}
			case 3:{
				update();	printf("enter your selection:");
		scanf("%d",&secim);

				break;
			}
			case 4:{
				calculate_avarage();	printf("enter your selection:");
		scanf("%d",&secim);
	
				break;
			}
			case 5:{
				
			find_succesful();	
			printf("enter your selection:");
		scanf("%d",&secim);
				break;
			}
			case 6:{
				break;
			}
			getchar();
}		
	}while(secim!=6);
	
	return 0;
}
void add_new_record(){
	node *p;
	p=(node *)malloc(sizeof(node));
	if(head==NULL){
		head=p;
		tail=p;
	}
	else{
		tail->next=p;
		tail=p;
	}
	printf("enter student name:");scanf("%s",p->name);
	printf("enter student number:");
	scanf("%d",&p->number);
	printf("enter student final grade:");
	scanf("%d",&p->final);
	printf("enter student midterm exam result:");
	scanf("%d",&p->midterm);
	p=p->next;
}
void list(){
	node *p;
	p=head;
   if(p==NULL){
   	printf("there is no record entrance!!!");
   }
   else{
   	printf("NAME\t\tNUMBER\tMIDTERM\tFINAL\n");
   	while(p!=NULL){
   	printf("%s\t\t%d\t%d\t%d\n",p->name,p->number,p->midterm,p->final);
   	p=p->next;
	   }
   }
}
void update(){
	printf("enter the updated student number:");
	int stdno,flag=0;
	scanf("%d",&stdno);
	node *p;
	p=head;
	if(p==NULL){
		printf("there i no student entrance!!!");
	}
	else{
		while(p!=NULL){
			if(p->number==stdno){
				printf("enter student name:");scanf("%d",p->name);
				printf("enter student final grade:");
				scanf("%d",&p->final);
				printf("enter student midterm grade:");
				scanf("%d",&p->midterm);
				flag=1;
				break;
			}
		}
	}
	if(flag==0){
		printf("there is no student have this number");
	}
}
void calculate_avarage(){
	node *p;
	p=head;
	int counter=0,sum=0;
	while(p!=NULL){
		counter++;
		sum=calculation(p->midterm,p->final);
		p=p->next;
	}
	sum=sum/counter;
	printf("the avarage of the class is:%d",sum);
}

int calculation(int a,int b){
	int s=0;
	s=a*0.4+b*0.6;
	return s;
}
void find_succesful(){
	node *p;
	int temp;
	node *succesful;
	p=head;
	temp=calculation(p->midterm,p->final);
	p=p->next;
	while(p!=NULL){
		if(temp<calculation(p->midterm,p->final)){
			temp=calculation(p->midterm,p->final);
		    strcpy(succesful->name,p->name);
		    succesful->number=p->number;
		    succesful->final=p->final;
		    succesful->midterm=p->midterm;
		    
		}
		p=p->next;
		
	}
	printf("THE MOST SUCCESFUL STUDENT INFORMATION:\n\\n");
	printf("the student name:%s\n",succesful->name);
	printf("the student number:%d\n",succesful->number);
	printf("the student final grade:%d\n",succesful->final);
	printf("the sttudent midterm grade:%d\n",succesful->midterm);
	printf("The avarage of this student is:%d\n",temp);
	
}
