#include <stdio.h>
#include <stdlib.h>
#define max 30
void create(int set[]){
	set[0]=0;
	int i,n;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=1;i<=n;i++){
		scanf("%d",&set[i]);
	}
	set[0]=n;
}
void print(int set[]){
	int i;
	int n;
	n=set[0];
	for(i=1;i<=n;i++){
		printf("%d\t",set[i]);
	}
	printf("\n");
}
void uni( int set1[],int set2[],int birlesim[]){
	int i,n;
	birlesim[0]=0;
	n=set1[0];
	for(i=0;i<=n;i++){
		birlesim[i]=set1[i];
	}
	n=set2[0];
	for(i=1;i<=n;i++){
		if(!same(birlesim,set2[i])){
			birlesim[++birlesim[0]]=set2[i];
		}
		}
	}
	
int same(int set[],int x){
	int n,i;
	n=set[0];
	for(i=1;i<=n;i++){
		if(x==set[i]){
			return 1;
		}
	}
	return 0;
}
void un( int set1[],int set2[],int set3[], int birlesim[]){
		int i,n;
	birlesim[0]=0;
	n=set1[0];
	for(i=0;i<=n;i++){
		birlesim[i]=set1[i];
	}
	n=set2[0];
	for(i=1;i<=n;i++){
		if(!same(birlesim,set2[i])){
			birlesim[++birlesim[0]]=set2[i];
		}
		}
		n=set3[0];
		for(i=1;i<=n;i++){
			if(!same(birlesim,set3[i])){
				birlesim[++birlesim[0]]=set3[i];
			}
		}
}
void kesisim(int set1[],int set2[],int set4[]){
	int i,n;
	n=set1[0];
	set4[0]=0;
	for(i=1;i<=n;i++){
		if(same(set2,set1[i])){
			set4[++set4[0]]=set1[i];
		}
	}
}
void kes(int set1[],int set2[],int set3[],int set4[],int set5[]){

int i,n;
	n=set1[0];
	set4[0]=0;
	set5[0]=0;
	for(i=1;i<=n;i++){
		if(same(set2,set1[i])){
			set5[++set5[0]]=set1[i];
		}
	}
	n=set3[0];
	for(i=1;i<=n;i++){
		if(same(set5,set3[i])){
			set4[++set4[0]]=set3[i];
		}
	}
}
void fark(int set1[],int set2[],int set4[]){
	int i,n;
	n=set1[0];
	set4[0]=0;
	for(i=1;i<=n;i++){
		if(!same(set2,set1[i])){
			set4[++set4[0]]=set1[i];
		}
	}
}
void farki(int set1[],int set2[],int set3[],int set4[],int set5[]){
	int i,n;
	set4[0]=0;
	set5[0]=0;
	n=set2[0];
	set4[0]=0;
	for(i=0;i<n;i++){
		set5[i]=set2[i];
	}
    n=set1[n];
	for(i=1;i<=n;i++){
		if(!same(set5,set1[i])){
			set5[++set5[0]]=set1[i];
		}
	}
	n=set3[0];
		for(i=1;i<=n;i++){
		if(!same(set5,set3[i])){
			set4[++set4[0]]=set3[i];
		}
	}
}
int main(int argc, char *argv[]) {
	int s1[max],s2[max],s3[max],s4[max],s5[max];
	
	int opera;
	s1[0]=s2[0]=s3[0]=0;
	do{
		printf("\n1:create 3 set:");
		printf("\n2:print 3 set:");
		printf("\n3:union for set 1 and s2:");
		printf("\n4:union for set 1 and s3:");
		printf("\n5:union for set 2 and s3:");
		printf("\n6:union for 3 set:");
		printf("\n7:kesisim for set 1 and s3:");
		printf("\n8:kesisim for set 1 and s3:");
		printf("\n9:kesisim for set 2 and s3:");
		printf("\n10:kesisim for 3 set:");
		printf("\n7:fark for set 1 and s3:");
		printf("\n8:fark for set 1 and s3:");
		printf("\n9:fark for set 2 and s3:");
		printf("\n10:fark for 3 set:");
		printf("\n11:press 11 for exit\n");
		printf("enter operator:");
		scanf("%d",&opera);
		printf("\n\n");
		switch(opera){
			case 1:{
				create(s1);
				create(s2);
				create(s3);
				break;
			}
			case 2:{
				printf("set 1:\n");
				print(s1);
				printf("set 2:\n");
				print(s2);
				printf("set 3:\n");
				print(s3);
				break;
			}
			case 3:{
				uni(s1,s2,s4);
				print(s4);
				break;
			}
			case 4: {
				uni(s1,s3,s4);
				print(s4);
				break;
			}
			case 5:
				{
					uni(s2,s3,s4);
					print(s4);
					break;
				}
			case 6:{
				un(s1,s2,s3,s4);
				print(s4);
				break;
			}
			case 7:{
				kesisim(s1,s2,s4);
				print(s4);
				break;
			}
			case 8:{
				kesisim(s1,s3,s4);
				break;
			}
			case 9:{
				kesisim(s2,s3,s4);
				break;
			}
			case 10:{
				kes(s1,s2,s3,s4,s5);
				print(s4);
				break;
			}
			case 11:{
				fark(s1,s2,s4);
				print(s4);
				break;
			}
			case 12:{
				fark(s3,s2,s4);
				print(s4);
				break;
			}
			case 13:{
				fark(s1,s3,s4);
				print(s4);
				break;
			}
			case 14:{
				farki(s1,s2,s3,s4,s5);
				print(s4);
				break;
			}
	  default:{
	  	printf("enter valid value:\n ");
		break;
	  }
		}
	}while(opera!=10);
	return 0;
}
