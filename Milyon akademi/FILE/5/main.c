#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *dosya;
	int n,i;
	dosya=fopen("evenodd.txt","w");
	if(dosya==NULL){
		printf("the file can't created");
	}
	else{
		printf("enter last number:");
		scanf("%d",&n);
		for(i=0;i<=n;i++){
			if(i%2==0){
				fprintf(dosya,"%d is an even number\n",i);
			}
			else{
				fprintf(dosya,"%d is an odd number\n",i);
			}
		}
	}
	fclose(dosya);
	printf("the information is written the file");
	printf("\nthe information is reading from file\n");
	dosya=fopen("evenodd.txt","r");
	char *number;
	do{
		number=getc(dosya);
		if(number!=EOF){
			putchar(number);
		}
	}while(number !=NULL);
	fclose(dosya);
	return 0;
}
