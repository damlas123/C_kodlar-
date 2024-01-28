#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void delete(int array[],int elementno){
	int temp,i;
	for(i=elementno;i<20;i++){

			array[i]=array[i+1];
			array[i+1]=array[i+2];
	}
	for(i=0;i<19;i++){
		printf("%d\t",array[i]);
	}
}

int main(int argc, char *argv[]) {
	int ar[20],a;
	srand(time(0));
	printf("your array created like that\n");
	for(a=0;a<20;a++){
		ar[a]=rand()%100;
		printf("%d\t",ar[a]);
	}
	printf("\n enter the element number which want to delete");
	scanf("%d",&a);
	delete(ar,a);
	return 0;
}
