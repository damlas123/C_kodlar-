#include <stdio.h>
#include <stdlib.h>
#define n 3
#define m 5
struct magaza {
	char name[20];
	char street[20];
	char neigh[20];
	int phone;
	int sale;
};
struct employer{
	char name[20];
	char surname[20];
	int age;
	int enyas;
};
struct product{
	int code;
	int price;
};
void magg(struct magaza mg[],int num){
	int i;
	for(i=0;i<num;i++){
		printf("enter magaza name:");
		scanf("%s",&mg[i].name);
		printf("enter magaza street:");
		scanf("%s",&mg[i].street);
		printf("enter magaza neigbhord:");
		scanf("%s",&mg[i].neigh);
		getchar();
		printf("enter magaza phone:");
		scanf("%d",&mg[i].phone);
		printf("enter magaza sales:");
		scanf("%d",&mg[i].sale);
	}
}
void pro(struct product p[]){
    int i;
    for(i=0;i<m;i++){
	
    	printf("enter product code:");
    	scanf("%d",&p[i].code);
    	printf("enter product price:");
    	scanf("%d",&p[i].price);
}
}
void prin(struct product p[]){
	int i=0;
	for(i=0;i<m;i++){
		printf("%d\t%d\n",p[i].code,p[i].price);
	}
}
void emp(struct employer a[]){
	int i;
	for(i=0;i<n;i++){
		printf("enter employer name:");
		scanf("%s",&a[i].name);
		printf("enter employer surname");
		scanf("%s",&a[i].surname);
		getchar();
		printf("enter age:");
		scanf("%d",&a[i].age);
	}
}
void emprin(struct employer a[]){
	int i;
	for(i=0;i<n;i++){
		printf("%s\t%s\t%d\n",a[i].name,a[i].surname,a[i].age);
	}
}
void magprin(struct magaza mag[],int an){
	int i=0;
	for(i=0;i<an;i++){
		printf("%s\t%s\t\%s\t%d\t%d\n",mag[i].name,mag[i].street,mag[i].neigh,mag[i].phone,mag[i].sale);
	}
	
}
void yasli(struct employer mel[]){
	int i,max=0;
	int birinci;
	for(i=0;i<n;i++){
	
	if(max<mel[i].age){
		max=mel[i].age;
		birinci=i;
	}
}
  printf("THE OLDER EMPLEYOR:%s\t%s\t%d",mel[birinci].name,mel[birinci].surname,mel[birinci].age);
}
int main(int argc, char *argv[]) {
    int number;
    printf("enter magaza number:");
    scanf("%d",&number);
    struct magaza dukkan[number];
    magg(dukkan,number);
    struct employer calisan[n];
    emp(calisan);
    struct product pr[m];
    pro(pr);
    printf("************MAGAZA NAME*************\n");
    magprin(dukkan,number);
    printf("************EMPLOYER NAME**************\n");
    emprin(calisan);
    printf("************PRODUCT CODE AND PRICE************\n");
    prin(pr);
    
    printf("\n\n");
    yasli(calisan);
    
    
	
	return 0;
}
