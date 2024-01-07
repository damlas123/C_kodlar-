#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	int i,j,temp,place,n;
	printf("enter how many elements do you enter:");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++){
		dizi[i]=rand()%100;
	}
	printf("your array created like that:\n");
	for(i=0;i<n;i++){
		printf("%d\t",dizi[i]);
	}
	for(i=0;i<n-1;i++){
		place=i;
		for(j=i+1;j<n;j++){
			if(dizi[place]>dizi[j]){
				place=j;
			}
		}
		if(place!=i){
			temp=dizi[i];
			dizi[i]=dizi[place];
			dizi[place]=temp;
		}
	}
	printf("\nthe sorting array is like that:\n");
	for(i=0;i<n;i++){
		printf("%d\t",dizi[i]);
	}
	
	return 0;
}
