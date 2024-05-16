#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int zar1,zar2;
	printf(":::::::::::::: OYUNA HOSGELDINIZ ::::::::::\n\n");
	printf("kac oyuncu olucak:");
	int n;
	scanf("%d",&n);
   int array[n];
   int sum[n];
   int oper,i;
   for(i=0;i<n;i++){
   	printf("zar atmak icin 1 basin:\n");
   	scanf("%d",&oper);
   	switch(oper){
   		case 1:{
   			zar1=1+(rand()%6);
   			printf("1.zar :%d\n",zar1);
   			zar2=1+(rand()%6);
   			printf("2.zar:%d\n",zar2);
   			sum[i]=zar1+zar2;
   			if(sum[i]==7 || sum[i]==11){
   				printf("***********kazandiniz************\n");
   				printf("%d\n",sum[i]);
			   }
			   else if(sum[i]==2 || sum[i]==3 ||sum[i]==12){
			   	printf("****kaybettiniz*****\n");
			   	printf("%d\n",sum[i]);
			   }
			   else{
			   	printf("%d\n",sum[i]);
			   }
			break;
		   }
	   }
   }
	return 0;
}
