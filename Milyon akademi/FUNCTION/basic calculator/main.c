#include <stdio.h>
#include <stdlib.h>
 float transaction(float n1,float n2,char islem){
 	if(islem == '+'){
 		return n1+n2;
	 }
	 else if(islem == '-'){
	 	return n1-n2;
	 }
	 else if(islem == '*'){
	 	return n1*n2;
	 }
	 else if(islem == '/'){
	 	return n1/n2;
	 }
	 else {
	 	printf("you entered wrong transaction");
	 }
 }
int main(int argc, char *argv[]) {
	float d,d1;
	char tran;
	printf("enter which transaction do you want to do:");
	scanf("%c",&tran);
	printf("enter numbers:");
	scanf("%f%f",&d,&d1);
	
    printf("the result of transaction is:%f",transaction(d,d1,tran));
	return 0;
}
