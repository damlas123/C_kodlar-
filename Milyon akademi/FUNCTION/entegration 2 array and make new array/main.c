#include <stdio.h>
#include <stdlib.h>
 void entegration(int ar1[],int s,int s1,int ar2[]);
int main(int argc, char *argv[]) {
	int a,b;
	printf("enter element number of first array: ");
	scanf("%d",&a);
	printf("enter element number of second array:");
	scanf("%d",&b);
	int arr[a],arr2[b];
	int i;
	for(i=0;i<a;i++){
		printf("enter %d element for firs array:",i+1);
		scanf("%d",&arr[i]);
	}
		for(i=0;i<b;i++){
		printf("enter %d element for second element:",i+1);
		scanf("%d",&arr2[i]);
	}
	entegration(arr,a,b,arr2);
	return 0;
}
void entegration(int ar1[],int s,int s1,int ar2[]){
	int i;
	int arraynew[s+s1];
	printf("the new aray is:\n");
	for(i=0;i<s;i++){
		arraynew[i]=ar1[i];
	}
	int a=0;
	for(i=s;i<s+s1;i++){
		arraynew[i]=ar2[a];
		a++;
	}
	for(i=0;i<s+s1;i++){
		printf("%d\n",arraynew[i]);
	}
}
