#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a=20;
	printf("the size of a hold place in memory : %d byte",sizeof(a));
	printf("int hold data %d byte in memory\n",sizeof(int));
	printf("char hold data %d byte in memory \n",sizeof(char));
	printf("double hold data %d byte in memory\n",sizeof(double));
	printf("float hold data %d byte in memory ",sizeof(float));
	return 0;
}
