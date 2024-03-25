#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n;
	printf("enter the size of arrays:");
	scanf("%d",&n);
	int *p,*p2;
	int array[n];
	srand(time(0));
	int i,counterodd=0,countereven=0;
	for(i=0;i<n;i++){
		array[i]=rand()%100;
	}
	p=(int *)malloc(n*sizeof(int));
	p2=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		if(array[i]%2==0){
			*(p+countereven)=array[i];
			countereven++;
		}
		else{
			*(p2+counterodd)=array[i];
			counterodd++;
		}
	}
	printf("there are %d odd number and like that:\n",counterodd);
	for(i=0;i<counterodd;i++){
		printf("%d\t",*(p2+i));
	}
		printf("\nthere are %d even number and like that:\n",countereven);
	for(i=0;i<countereven;i++){
		printf("%d\t",*(p+i));
	}
	return 0;
}
