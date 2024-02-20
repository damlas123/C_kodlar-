#include <stdio.h>
#include <stdlib.h>
int factoriel(int number){
	if(number==0){

return 0;
 }
	else if(number!=1)
{
	return number*factoriel(number-1);
}   
  
else{
	return number;
}
}

int main(int argc, char *argv[]) {
	int s;
	printf("enter number:");
	scanf("%d",&s);
    printf("%d!=%d",s,factoriel(s));
	return 0;
}
