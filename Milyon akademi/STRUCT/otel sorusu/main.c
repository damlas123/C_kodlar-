#include <stdio.h>
#include <stdlib.h>
#define n 2
struct musteri{
	char name[10];
	char surname[10];
	int kahvalti;
	int aksam;
	int otel_hizmeti;
	int price;

}; 
int fiyat(int k,int d,int o ){
	int f,pr;
	printf("will you stay a friend(enter 1 or 0):");
	scanf("%d",&f);
	if(k==1 && d==1){
		
		if(o==2 && f==1){
			pr=175;
		}
		else if(o==2 && f==0){
		pr=125;	
		}
		else if(o==3 && f==1){
			pr=200;
		}
		else{
			pr=150;
		}
	}
	else if(k==1 && d==0){
		if(o==2 && f==1){
			pr=140;
		}
		else if(o==2 && f==0){
		pr=90;	
		}
		else if(o==3 && f==1){
			pr=165;
		}
		else{
			pr=115;
		}
	}
	
		else if(k==0 && d==1){
			if(o==2 && f==1){
			pr=160;
		}
		else if(o==2 && f==0){
		pr=110;	
		}
		else if(o==3 && f==1){
			pr=185;
		}
		else{
			pr=135;
		}
		}
	 else{
	 	if(o==2 && f==1){
			pr=75;
		}
		else if(o==2 && f==0){
		pr=75;	
		}
		else if(o==3 && f==1){
			pr=100;
		}
		else{
			pr=100;
		}
	 }
	
	return pr;
	
}
int main(int argc, char *argv[]) {
	struct musteri array[n];
	int i;
	for(i=0;i<n;i++){
		printf("Enter guest name:");
		scanf("%s",&array[i].name);
		printf("enter guest surname:");
		scanf("%s",&array[i].surname);
		getchar();
		printf("if breakfast included enter 1:");
		scanf("%d",&array[i].kahvalti);
		printf("if dinner included enter 1:");
		scanf("%d",&array[i].aksam);
		printf("if you take hotel for 2 star enter 2 for 3 star enter 3 and nothing enter 0:");
		scanf("%d",&array[i].otel_hizmeti);
		if(array[i].otel_hizmeti!=0){
		array[i].price=fiyat(array[i].kahvalti,array[i].aksam,array[i].otel_hizmeti);
		}
		else{
			if(array[i].aksam==1 && array[i].kahvalti==1){
				array[i].price=50;
			}
			else if(array[i].aksam==0 && array[i].kahvalti==1){
				array[i].price=15;
			}
			else if(array[i].aksam==1 && array[i].kahvalti==0){
				array[i].price=35;
			}
			else{
				array[i].price=0;
			}
		}
	}
	printf("***************************THE PRICE FOR EACH GUEST\n**********************************");
	
	for(i=0;i<n;i++){
		if(array[i].otel_hizmeti==2){
		
		printf("%s\t%s\t%d\n",array[i].name,array[i].surname,array[i].price);
	}
}
	
	
	
	
	
	
	
	
	return 0;
}
