#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,i,j,ort,a,ilk,son;
	printf("enter elements number:");
	scanf("%d",&n);
	int array[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	printf("\nthe array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	printf("\nthe sorting array\n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				ort=array[j];
				array[j]=array[j+1];
				array[j+1]=ort;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	printf("\nenter the number:");
	scanf("%d",&a);
	ilk=0;
	son=n-1;
	ort=(ilk+son)/2;
	while(ilk<=son){
	
	if(array[ort]==a){
		printf("%d number %d.sequent",a,ort+1);
		break;
	}
	else if(array[ort]<a){
		ilk=ort+1;
	}
	else{
		son=n-1;
	}
	ort=(ilk+son)/2;
}
 if(ilk>son){
 	printf("the number is not in the array");
 }
	return 0;
}
