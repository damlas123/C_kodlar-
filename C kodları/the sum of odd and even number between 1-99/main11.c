#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sumodd,sumeven,i;
	for(i=1;i<100;i++){
		if(i%2==0){
			sumeven+=i;
		}
		else{
			sumodd+=i;
		}
	}
	printf("sum of odd number:%d",sumodd);
	printf("sum of even number: %d",sumeven);
	return 0;
}
