#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	int n,i,search,flag=0;
	printf("enter numbers of elements:");
	scanf("%d",&n);
	int array[n];
	printf("the array created like that:\n");
	for(i=0;i<n;i++){
		array[i]=rand()%100;
		printf("%d\t",array[i]);
	}
	printf("\nenter the searching number:");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(array[i]==search){
			printf("%d elemets is %d . sequent",search,i+1);
			flag=1;
			exit(0);
		}
	}
	if(flag==0){
		printf("there is no number which you");
	}
	return 0;
}
