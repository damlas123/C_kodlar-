#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct personal{
	int password;
	char name[50];
	char surname[50];
	char gender;
	int age;
	float salary;
};
void sorting (struct personal x[],int m);
void list(struct personal x[],int m);
int main(int argc, char *argv[]) {
	int n;
	printf("enter the number of person:");
	scanf("%d",&n);
	int i;
	struct personal array[n];
	for(i=0;i<n;i++){
		printf("enter %d person password:",i+1);
		scanf("%d",&array[i].password);
		printf("enter name :");
		getchar();
		fgets(array[i].name,sizeof(array[i].name),stdin);
		printf("enter surname:");
		fgets(array[i].surname,sizeof(array[i].surname),stdin);
		printf("enter gender:");
		scanf("%s",&array[i].gender);
		
		printf("enter age:");
		scanf("%d",&array[i].age);
		printf("enter salary:");
		scanf("%f",&array[i].salary);
	}
	sorting(array,n);
	list(array,n);
	
	return 0;
}
void sorting(struct personal x[],int m){
	int i,j;
    struct 	personal y;
	for(i=0;i<m-1;i++){
		for(j=i+1;j<m;j++){
			if(strcmp(x[i].name,x[j].name)>0){
				y=x[i];
				x[i]=x[j];
				x[j]=y;
			}
		}
		}
		
	}
void list(struct personal x[],int m){
	int i;
	for(i=0;i<m;i++){
		printf("%d  %s  %s   %d  %f   %s\n",x[i].password,x[i].name,x[i].surname,x[i].age,x[i].salary,x[i].gender);
	}
}
