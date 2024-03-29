#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int i,j,temp,n,index;
    printf("enter elements number:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
    	array[i]=rand()%100;
	}
	printf("array created like that:\n");
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
	for(i=0;i<n-1;i++){
		index=i;
		for(j=i+1;j<n;j++){
			if(array[index]>array[j]){
				index=j;
			}
		}
		if(index!=i){
			temp=array[i];
			array[i]=array[index];
			array[index]=temp;
		}
	}
	printf("\nafter sorting:\n");
	for(i=0;i<n;i++)
{
	printf("%d\t",array[i]);
	}    
	return 0;
}
