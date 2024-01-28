#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void max(int array[]){
	int i,enb;
    enb=array[0];
    for(i=1;i<20;i++){
    	if(enb<array[i]){
    		enb=array[i];
		}
	}
	printf("the max value is:%d\n",enb);
}
void min(int array[]){
	int j,enk;
	j=array[0];
	for(j=1;j<20;j++){
		if(enk>array[j]){
			enk=array[j];
		}
	}
	printf("the min value is:%d",enk);
}
int main(){
	int ar[20],i;
	srand(time(0));
	for(i=0;i<20;i++){
		ar[i]=rand()%100;
		printf("%d\n",ar[i]);
	}
	max(ar);
	min(ar);
}
