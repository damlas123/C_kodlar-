#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
/*	//1 ile 1000 aras�ndaki say�lar� ekrana yazd�ran C program�
    int i;
	for(i=1;i<1001;i++){
		printf("%d\n",i);
	}*/
	//: Girilen pozitif bir tamsay�n�n fakt�riyelini hesaplayan C program�
/*	int i,fac=1,n;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac=fac*i;
	}
	printf("%d factoriel is:%d",n,fac);*/
	//1�den N�e kadar olan tamsay�lar�n toplam�
/*	int i,sum=0,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("sum of number betweeen 1 to %d is:%d",n,sum);*/
	//1�den N�e kadar olan �ift tamsay�lar�n toplam�n� hesapla
/*	int i,sum=0,n;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("sum of even number betweeen 1 to %d is:%d",n,sum);*/
	//Girilen pozitif bir tamsay�n�n tam b�lenlerini bul
/*	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
		}
	}*/
	//Klavyeden girilen 20 adet say�dan �ift say�lar�n toplam�n�n tek say�lar�n toplam�na oran�n�
/*	int es=0,os=0,n,i;
	int avg;
	for(i=0;i<20;i++){
		printf("enter number:");
		scanf("%d",&n);
		if(n%2==0){
			es=es+n;
		}
		else{
			os=os+n;
		}
	}
	avg=es/os;
	printf("avarage : %d",avg);*/
	//10 ile 1000 aras�ndaki tam kare say�lar� ekrana yazd�ran 
/*	int i,a;
	for(i=4;i<=35;i++){
		a=i*i;
		if(a>10 && a<1000){
			printf("%d\n",a);
		}
	}
	*/
	/*int m=1,s=0,r,i,j=0;
	for(i=0;i<25;i++){
		printf("enter a number:");
		scanf("%d",&r);
		if(r<0){
			s=s+r;
		}
		else if(r%2==0){
			m=m*r;
		}
		else if(r==7){
			j++;
		}

	}
	printf("sum of negative number:%d\n",s);
	printf("multiplacatiton pf even number:%d\n",m);
	printf("number of number which equal 7:%d",j);*/
	/*X,Y pozitif olmak �zere, e�er x say�s�n�n �arpanlar� toplam� y say�s�na ve ayn� zamanda y say�s�n�n �arpanlar� toplam� x say�s�na e�it ise bu say�lar dost say�lard�r. Buna g�re girilen iki say�n�n dost olup olmad���n� bulan C program�n� */
	/* int x,y,msx=0,msy=0,i;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	for(i=1;i<x/2;i++){
	if(x%i==0){
		msx=i+msx;
	}
}
for(i=1;i<=y/2;i++){
	if(y%i==0){
		msy=i+msy;
	}
}
	if(msy==x && msx==y){
		printf("dost sayilardir");
	}
	else{
		printf("dost sayi degiller");
	} */
	//1 ile 500 aras�ndaki tam say�lardan tek say�lar�n toplam� ile �ift say�lar�n toplam�n�n fark� negatif mi, pozitif mi oldu�unu bulan C program�
/*	int i,s1=0,s2=0;
	for(i=1;i<=500;i++){
		if(i%2==0){
			s1=s1+i;
		}
		else{
			s2=s2+i;
		}
	} 
	if(s1-s2>0){
		printf("positive");
	}
	else{
		printf("negative");
	}*/
//10 ile 200 aras�ndaki tam say�lardan 3 kat�n�n 2 fazlas� 5 ile tam b�l�nebilen say�lar� g�steren C program�n� yaz�n�z	
 /*int i;
 for(i=10;i<=200;i++){
 	if((3*i+2)%5==0){
 		printf("%d\n",i);
	 }
 }

*/
//1-1/3+1/5-1/7+1/9-1/11+� serisinin n tane terim i�in toplam�n� hesaplayan C program�n�
/*int i,sum=0,n;
printf("enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
	if(i%2==0){
		sum=sum-(1/(i+1));
	}
	else{
		sum=sum+(1/(i));
	}
}
printf("%d",sum);
*/
	return 0;
}
