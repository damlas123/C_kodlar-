#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct patient{
	int no;
	char name[40];
	int age;
	char situation[2];
};
void list(FILE *);
void delete_record(FILE *);
int enter_selection(void);
void update_record(FILE *);

int main(int argc, char *argv[]) {
	FILE *myptr;
	struct patient p={0,"",0,""};
	int n,i;
	printf("enter patient number:");
	scanf("%d",&n);
	if((myptr=fopen("patient.txt","w"))==NULL)
{
	printf("the file can not crreated");
	}
	else{
		for(i=1;i<n;i++){
			printf("enter patient name:");
			scanf("%s",p.name);
			printf("enter patient age:");
			scanf("%d",&p.age);
			printf("enter patient stiuation for sick S for health H");
			scanf("%s",p.situation);
			fseek(myptr,(i-1)*sizeof(struct patient),SEEK_SET);
			fwrite(&p,sizeof(struct patient),1,myptr);
		}
	}
	fclose(myptr);
	if((myptr=fopen("patient.txt","r"))==NULL){
		printf("the file is null");
	}
	else{
		int secim;
		while((secim=enter_selection())!=4){
			switch(secim){
				case 1:{
					delete_record(myptr);
					break;
				}
				case 2:{
					update_record(myptr);
					break;
				}
				case 3:{
					list(myptr);
					break;
				}
			}
		}
		fclose(myptr);
	}
	
	return 0;
}
int enter_selection(void){
	int s;
	printf("MENU\n1-)DELETE RECORD\n2-)UPDATED A PATIENT\n3-)LIST SICK PATIENT\n4-EXIT\n");
	printf("enter a selection:");
	scanf("%d",&s);
	return s;
}
void delete_record(FILE *file){
	struct patient bos,dolu={0,"",0,""};
	int n;
	printf("enter deleted patient number:");
	scanf("%d",&n);
	fseek(file,(n-1)*sizeof(struct patient),SEEK_SET);
	fread(&dolu,sizeof(struct patient),1,file);
	if(dolu.no==0){
		printf("there is no record");
	}
	else{
		fseek(file,(n-1)*sizeof(struct patient),SEEK_SET);
		fwrite(&bos,sizeof(struct patient),1,file);
	}
}
void update_record(FILE *file){
	struct patient p={0,"",0,""	};
	printf("enter patient number:");
	int n;
	scanf("%d",&n);
	fseek(file,(n-1)*sizeof(struct patient),SEEK_SET);
	fread(&p,sizeof(struct patient),1,file);
	if(p.no==0){
		printf("there is no record");
	}
	else{
		printf("enter new information with respect to this queve(name-age-situaon)");
		scanf("%s %d %s",p.name,&p.no,p.situation);
		fseek(file,(n-1)*sizeof(struct patient),SEEK_SET);
		fwrite(&p,sizeof(struct patient),1,file);
	}
}
void list(FILE *file){
	struct patient p={0,"",0,""};
	rewind(file);
	printf("THE SICK PATIENT\n");
	printf("NO\tNAME\tAGE\tSITUATION\n");
	while(!feof(file)){
		fread(&p,sizeof(struct patient),1,file);
		if(!strcmp(p.situation,"S")){
			printf("%d \t %s \t %d \t %s\n",p.no,p.name,p.age,p.situation);
		}
	}
	fclose(file);
}
