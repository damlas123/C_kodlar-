#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char *argv[]) {
	//klavyeden girilen n elemanl� bir dizinin k katsay�s� ,le �arp�p yeni dizi olu�turma
/*	int d[10],n,i,d2[10],k;
	printf("enter which number do you want to mulpily :");
	scanf("%d",&k);
	printf("how many element you enter:");
	scanf("%d",&n);
	printf("enter your elements sequently:");
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++){
		d2[i]=k*d[i];
		printf("%d\n",d2[i]);
	}*/
	//klavyeden girilen n elemnal� a dizisinin elemanlar�n�n ters s�rada b eleman� dizisine yerle�tiren program
/*	int d[10],d2[10],i,n;
	printf("enter how many elements you put array:");
	scanf("%d",&n);
	printf("enter your elements :");
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++){
		d2[i]=d[n-1-i];
		printf("%d\n",d2[i]);
	}
	*/
	// ba�ka bir dizi kullanmadan diziyi tersten yazma
	/*int d[10],n,i;
	printf("enter how many element do you create:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n",d[n-1-i]);
	}*/
	// klavyeden girilen n elemanl� A ve B dizilerinin skaler �arp�m�n� hesaplayan program
	/*int a[10],b[10],i,s=0,n;
	printf("enter how many element occur your array:");
	scanf("%d",&n);
	printf("enter elements of array a:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter elements of array b:");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		s+=a[i]*b[i];
	}
	printf("the scaler product of your arrays is:%d",s);
	*/
	// klavyeden girilen n elemanl� a dizisinin aritmetik, geometrik,harmonik,kontraharmonik ortalamas�n� hesaplayan program
/*	int d[10],n,i,a=0,g=1,h=0,kh=0;
	printf("enter how many elements you occur your arrays:");
	scanf("%d",&n);
	printf("enter your elements:");
	for(i=0;i<n;i++){
		scanf("%d",&d[i]);
		a+=d[i];
		g*=d[i];
		h+=1/d[i];
		kh+=d[i]*d[i];
	}
	kh=kh/a;
	a=a/n;
	g=pow(g,(1/n));
	h=n/h;
	printf("the aritmetic avarage is :%d\n",a);
	printf("the geometric avarage is:%d\n",g);
	printf("the harmonic avarage is:%d\n",h);
	printf("the kontharmonic avarage is:%d\n",kh);
	*/
	// katsay�lar klavyeden girilen n. dereceden y(x)=anx^n+... polinumu x=b i�in hesaplayan program� yazd�ran progra� yaz�n
/*	int i,n,x,a[10];
	float s=0;
	printf("enter degree:");
	scanf("%d",&n);
    for(i=0;i<=n;i++){
    	printf("enter x^%d :",i);
    	scanf("%d",&a[i]);
	}

	printf("enter x value:");
	scanf("%d",&x);
	for(i=0;i<=n;i++){
		s+=a[i]*pow(x,i);
	  
	}
	printf("%f",s);
	*/
	return 0;
}
