#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n,i,ce=0,co=0;
	int *p,*p1;
	printf("enter size of array:");
	scanf("%d",&n);
	int array[n];
	p=(int *)malloc(n*sizeof(int));
	p1=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%2==0){
		
			p[ce]=array[i];
				ce++;
		}
		else{
		
			p1[co]=array[i];
				co++;
		}
	}
	printf("the number of even number:%d and they are like that:\n",ce);
	for(i=0;i<ce;i++)
{
	printf("%4d",(p[i]));
	}	
	printf("\nthe number of odd number :%d and they are like that:\n",co);
	for(i=0;i<co;i++){
		printf("%4d",(p1[i]));
	}
	free(p);
	free(p1);
	return 0;
}
