#include <iostream>


int main(int argc, char** argv) {
	int n[5];
	for(size_t i =0;i<5;++i){
		n[i]=0;
	}
	printf("%s%8s\n","element","value");
	for(size_t i=0;i<5;++i){
		printf("%7zu%8d\n",i,n[i]);
	}
	return 0;
}
