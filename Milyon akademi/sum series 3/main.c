#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int t=0,s=0,i,k,n;
	printf("enter last value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		t=0;
		for(k=1;k<=i;k++){
			t+=k;
			s+=k;
			printf("%d",k);
			if(k<i)
			{
				printf(" + ");
			}
		
		}
		printf(" = %d\n",t);
	
	}
		printf("the total sum is:%d",s);
	return 0;
}
