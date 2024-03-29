#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int quicksort(int d[],int ilk,int son){
	int i,j,pivot,gecici;

	if(ilk<son){
	i=ilk;
	j=son;
	pivot=ilk;
		while(i<j){
			while (d[i]<d[pivot] && i<son){
				i++;
			}
			while(d[j]>d[pivot]){
				j--;
			}
			if(i<j){
				gecici=d[i];
				d[i]=d[j];
				d[j]=gecici;
			}		}
	gecici=d[pivot];
	d[pivot]=d[j];
	d[j]=gecici;
	quicksort(d,ilk,j-1);
	quicksort(d,j+1,son);		
	}
}
int main(int argc, char *argv[]) {
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	int array[n];
	printf("array created like that:\n");
	for(i=0;i<n;i++)
	{
		array[i]=rand()%100;
		printf("%d\t",array[i]);
	}
   quicksort(array,0,n-1);
   printf("\nafter sorting array:\n");
   for(i=0;i<n;i++){
   	printf("%d\t",array[i]);
   }
	return 0;
}
