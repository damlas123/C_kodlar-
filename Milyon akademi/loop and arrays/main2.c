#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*int ar[10];
	int i;
	printf("enter arrays' elements:");
	for(i=0;i<10;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<10;i++){
		
		printf("%d\n",ar[i]);
	}
	*/
	//fibonacci dizisinin ilk 10 terimini bulduran dizi programý
/*	int f[10];
	int i=1,j=1,k,s;
	  f[k]=i;
   f[k+1]=j;
for(k=2;k<10;k++){
 
   s=j+i;
   i=j;
   j=s;
   f[k]=j;
  
}
  for(k=0;k<10;k++){
  	printf("%d\n",f[k]);
  }
  */
  // bir sayý dizisinin en büyük elemanýný bulduran program
/*  int dizi[10],i;

  printf("enter elements:");
  for(i=0;i<10;i++){
  	scanf("%d",&dizi[i]);
  }
  int max=dizi[i];
  for(i=0;i<10;i++){
  	if(max<dizi[i+1]){
  		max=dizi[i+1];
	  }
  }
  printf("%d",max);*/
  //Örnek 5: Bir sýnýftaki 50 öðrencinin bir dersten aldýklarý yýl sonu notlarý veriliyor.Baþarý notu 50 olduðuna göre kaç öðrencinin baþarýlý olduðunu bulan C programýný yazýnýz.
/* int dizi[50],i,p=0;
 printf("enter grades:");
 for(i=0;i<50;i++){
 	scanf("%d",&dizi[i]);
 	if(dizi[i]>=50){
 		p++;
	 }
 }
 printf("%d",p);
 */
 //istenildiði kadar elemandan oluþan bir sayý dizisinde negatif ve pozitif elemanlarýn sayýsýný bulan C programýný yazýnýz.
 /*int dizi[10],i,j=0,k=0;
 printf("enter array elements:");
 for(i=0;i<10;i++){
 	scanf("%d",&dizi[i]);
 	if(dizi[i]>0){
 		j++;
	 }
	 else if(dizi[i]<0){
	 	k++;
	 }
 }
 printf("positive number's:%d and number of negative number:%d",j,k);
 */
 //10 elemanlý bir dizinin elemanlarýndan hem 4'e hemde 5'e bölünen sayýlarý bulan C programýný yazýnýz
 /*int d[10];
 int i;
 for(i=0;i<10;i++){
 	scanf("%d",&d[i]);
 	if(d[i]%5==0 && d[i]%4==0){
 		printf("%d\n",d[i]);
	 }
 }*/
 //Örnek 8: 5 elemanlý dizinin elamanlarýnýn toplamlarýný bulan C programýný yazýnýz.
 /*int sum=0,dizi[5],i;
 for(i=0;i<5;i++){
 	scanf("%d",&dizi[i]);
 	sum+=dizi[i];
 }
 printf("sum of elements of your array:%d",sum);
*/
//Örnek 9: Bir dizide dýþarýdan girilen bir sayýnýn, dizinin elemanlarýndan kaç tanesinden küçük olduðunu bulan C programýný yazýnýz
/*int i,j=0,d[10],number;
printf("enter your array elements:");
for(i=0;i<10;i++){
	scanf("%d",&d[i]);
}
printf("enter number:");
scanf("%d",&number);
for(i=0;i<10;i++){
	if(d[i]>number){
		j++;
	}
}
printf("%d",j);*/
//Örnek 10: 10 elemanlý bir sayý dizisinin en büyük ve en küçük elemanlarýný ve yerini bulan C programýný yazýnýz.
/*int d[10],max,min;
int i;
 for(i=0;i<10;i++){
 	scanf("%d",&d[i]);
 }
 max=d[0];
 min=d[0];
 for(i=0;i<10;i++){
 	if(max<d[i+1]){
 		max=d[i+1];
	 }
	 if(min>d[i+1]){
	 	min=d[i+1];
	 }
 }
 printf("the max value is:%d and the min value:%d",max,min);
 */
 //Tam sayýlardan oluþan bir dizi veriliyor, bu dizi elemanlarýndan kaç tanesinin bir basamaklý, kaç tanesinin iki basamaklý, kaç tanesinin de üç basamaklý olduðunu bulan C programýný yazýnýz.
/*int d[5]={15,1,4,54,154};
int i,k=0,l=0,j=0;
for(i=0;i<5;i++){
	if(d[i]<10){
		j++;
	}
	if(d[i]<100 && d[i]>=10){
		k++;
	}
	if(d[i]>=100 && d[i]<1000){
		l++;
	}
}
printf("tek basamaklý :%d iki basamaklý :%d üç basamaklý:%d",j,k,l);
/*
	return 0;
}
