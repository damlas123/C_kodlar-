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
	//fibonacci dizisinin ilk 10 terimini bulduran dizi program�
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
  // bir say� dizisinin en b�y�k eleman�n� bulduran program
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
  //�rnek 5: Bir s�n�ftaki 50 ��rencinin bir dersten ald�klar� y�l sonu notlar� veriliyor.Ba�ar� notu 50 oldu�una g�re ka� ��rencinin ba�ar�l� oldu�unu bulan C program�n� yaz�n�z.
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
 //istenildi�i kadar elemandan olu�an bir say� dizisinde negatif ve pozitif elemanlar�n say�s�n� bulan C program�n� yaz�n�z.
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
 //10 elemanl� bir dizinin elemanlar�ndan hem 4'e hemde 5'e b�l�nen say�lar� bulan C program�n� yaz�n�z
 /*int d[10];
 int i;
 for(i=0;i<10;i++){
 	scanf("%d",&d[i]);
 	if(d[i]%5==0 && d[i]%4==0){
 		printf("%d\n",d[i]);
	 }
 }*/
 //�rnek 8: 5 elemanl� dizinin elamanlar�n�n toplamlar�n� bulan C program�n� yaz�n�z.
 /*int sum=0,dizi[5],i;
 for(i=0;i<5;i++){
 	scanf("%d",&dizi[i]);
 	sum+=dizi[i];
 }
 printf("sum of elements of your array:%d",sum);
*/
//�rnek 9: Bir dizide d��ar�dan girilen bir say�n�n, dizinin elemanlar�ndan ka� tanesinden k���k oldu�unu bulan C program�n� yaz�n�z
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
//�rnek 10: 10 elemanl� bir say� dizisinin en b�y�k ve en k���k elemanlar�n� ve yerini bulan C program�n� yaz�n�z.
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
 //Tam say�lardan olu�an bir dizi veriliyor, bu dizi elemanlar�ndan ka� tanesinin bir basamakl�, ka� tanesinin iki basamakl�, ka� tanesinin de �� basamakl� oldu�unu bulan C program�n� yaz�n�z.
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
printf("tek basamakl� :%d iki basamakl� :%d �� basamakl�:%d",j,k,l);
/*
	return 0;
}
