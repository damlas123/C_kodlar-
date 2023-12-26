#include <stdio.h>
#include <stdlib.h>
#define size 5


int main(int argc, char *argv[]) {
/*	int a[6];
	int i;
	for(i=0;i<6;i++){
		a[i]=i*2;
	}
	for(i=0;i<6;i++){
		printf("%d\n",a[i]);
	}
	*/
	//sum of arrays elements
	/*int a[size]={1,2,3,4,5};
	int i,t=0;
	for(i=0;i<5;i++){
		t+=a[i];
		
	}
	printf("%d",t);*/

	int responses[20];
	int frequency[6]={0};
	int i;
	for( i=0 ;i<20;i++){
		printf("%d student rate:",i+1);
		scanf("%d",&responses[i]);
	}
		size_t answer;

	for(answer = 0;answer<20;answer++){
		++frequency[responses[answer]];
	}
	printf("%s%12s\n","Rating","Frequency");
	size_t rating;
	for( rating=1;rating<6;++rating){
		printf("%6zu%12d\n",rating,frequency[rating]);
	}
	return 0;
}
