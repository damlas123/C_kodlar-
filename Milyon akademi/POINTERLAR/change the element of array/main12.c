#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
	printf("enter size of element:");
	scanf("%d",&n);
	int array[n];
	int *pointer;
	pointer=array;
	printf("enter element :");
	for(pointer=array;pointer<array+n;pointer++){
		scanf("%d",pointer);
	}
	int *pointer2;
	int num;
	for(pointer2=array+n-1,pointer=array;pointer<pointer2;pointer++,pointer2--){
		num=*pointer;
		*pointer=*pointer2;
		*pointer2=num;
	}
	printf("after changing elements:");
	for(pointer=array;pointer<array+n;pointer++){
		printf("%d\t",*pointer);
	}
	return 0;
}
