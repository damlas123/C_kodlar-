#include <stdio.h>
#include <stdlib.h>


int main() {
	int n[5]={32,27,64,18,95};
		printf("%s%8s\n","element","value");
    for(size_t i=0;i<5;i++){
    	printf("%7zu%8d\n",n[i]);
	}
	return 0;
}
