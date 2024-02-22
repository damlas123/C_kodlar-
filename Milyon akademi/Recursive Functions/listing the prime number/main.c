#include <stdio.h>
#include <stdlib.h>
int prime(int n,int i){
	 if(i==1){
	 	return 1;
	 }
	 else if(n%i==0){
	 	return 0;
	 }
	 else{
	 	prime(n,i-1);
	 }
}
int main(int argc, char *argv[]) {
	int number;
    int  kontrol,i;
    printf("enter a number:");
    scanf("%d",&number);
    for(i=2;i<=number;i++){
    	kontrol=prime(i,i/2);
    	if(kontrol==1)
{
	printf("%d\n",i);
	}	}
	return 0;
}
