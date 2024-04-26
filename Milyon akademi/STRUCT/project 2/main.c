#include <stdio.h>
#include <stdlib.h>

struct adres_defteri{
	char adres[100];
	char isim[10];
	char soyisim[10];
	int tel;
	int posta;
};
int main(int argc, char *argv[]) {
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	struct adres_defteri array[n];
	int i;
	for(i=0;i<n;i++){
		printf("enter %d person name:",i+1);
		scanf("%s",&array[i].isim);
		printf("enter %d person surname:",i+1);
		scanf("%s",&array[i].soyisim);
		printf("enter adress:");
			getchar();
		
		fgets(array[i].adres,sizeof(array[i].adres),stdin);
	
		printf("enter phone number:");
		scanf("%d",&array[i].tel);
		
		printf("enter post code:");
		scanf("%d",&array[i].posta);
		
	}
	printf("\n*********************ADRES DEFTERI************************\n");
	for(i=0;i<n;i++){
		printf("%s\t%s\t%d\t%d\n",array[i].isim,array[i].soyisim,array[i].tel,array[i].adres,array[i].posta);
	}
	return 0;
}
