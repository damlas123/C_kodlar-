#include <stdio.h>
#include <stdlib.h>

 int* dizi_birlestir(int a[],int n,int a2[],int n2);
 
int main(int argc, char *argv[]) {
	int i;
	int liste[5]={6,7,8,9,10};
	int liste2[7]={13,7,12,9,7,1,14};
	int *ptr;
	ptr=dizi_birlestir(liste,5,liste2,7);
	for(i=0;i<12;i++){
		printf("%d",*(ptr+i));
		printf("\n");
	}
	free(ptr);
	return 0;
}
int* dizi_birlestir(int a[],int n,int a2[],int n2){
	int i;
	int *pt;
	pt=(int *)malloc((n+n2)*sizeof(int));
	
	for(i=0;i<n;i++){
		pt[i]=a[i];
	}

	for(i=0;i<n2;i++){
		pt[i+n]=a2[i];

	}
	return pt;
	
	free(pt);
}
