#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	// question 1 write 10 elements array and show it in the console
	 int dizi[10];
	 int i;
	 printf("enter elements:");
	 for(i=0;i<10;i++){
	 	scanf("%d",&dizi[i]);
	 }
	 for(i=0;i<10;i++){
	 	printf("%d\n",dizi[i]);
	 }
	return 0;
}
