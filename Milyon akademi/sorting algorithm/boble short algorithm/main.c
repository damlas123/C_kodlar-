#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int n,i,j,temp;
	printf("enter how many number do you enter:");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++){
		dizi[i]=rand()%100;
	}
	// eðer elemanlarý kullanýcan alýrsa algoritma þöyle olur
	/*
	printf ("enter your elements:\n");
	for(i=0;i<n;i++){
	scanf("%d\n",&dizi[i]);
    */

	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++)
	  {
			if(dizi[j]>dizi[j+1])
        {
	        temp=dizi[j];
	        dizi[j]=dizi[j+1];
	        dizi[j+1]=temp;
		}		
	  }
	}
	printf("the sorting of your array is like that\n");
	for(i=0;i<n;i++){
		printf("%d\n",dizi[i]);
	}

	return 0;
}
