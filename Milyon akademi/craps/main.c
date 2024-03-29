#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int zar1,zar2;
	srand(time(0));
	zar1=1+rand()%6;
	zar2=1+rand()%6;
	int sum;
	sum=zar1+zar2;
	printf("%d\n",zar1);
	printf("%d\n",zar2);
	if(sum==7 || sum==11){
		printf("you won");
	}
	else if(sum==2 || sum==12 || sum==3){
		printf("you lose");
	}
	else{
		printf
		("your score is:%d",sum);
	}
	return 0;
}
