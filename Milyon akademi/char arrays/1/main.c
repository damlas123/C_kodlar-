#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	// karakter de�i�tirme
/*	char dizim[]="CAN BOZ";
	dizim[0]='H';
	printf("%s",dizim);*/
	//strlen() fonksiyonun kullan�m� \0 saymaz
	/*char dizim[]="ARALIK";
	printf("length of your array is:%d\n",strlen(dizim));
	// sizeof fonksiyonun kullan�m� \0 sayar
	printf("size of your arrays is:%d",sizeof(dizim));
	*/
	//strcmp fonksiyonun kullan�m� 2 dizinin ascii kodunun b�y�k olan �ndeyse 1 arkadasaysa -1 e�itse s�f�r de�erini d�nd�r�r
/*	int sonuc,sonuc1,sonuc2;
	char d[15]="ABCDF";
	char d2[15]="abcdf";
	sonuc=strcmp(d,d2);
	printf("%d",sonuc);
	char d3[10]="aBCDEF";
	char d4[10]="Abcdef";
	sonuc1=strcmp(d3,d4);
	printf("%d",sonuc1);
	char d5[15]="avcxswef";
	char d6[15]="aresxcvh";
	sonuc2=strcmp(d5,d6);
	printf("%d",sonuc2);
	*/
	//strncmp belirtilen karaktere kadar ascii kodu k�yaslama yapar
	/*int sonuc;
	char can[10]="ABCdas";
	char d2[10]="ABcd";
	sonuc=strncmp(can,d2,4);
	printf("%d",sonuc);
	*/
	// strcpy fonksiyonun kullan�m�: bir dizideki bilgiyi di�erine kopyalar koplayanacak dizi sa�a yaz�l�r
/*	char d[20]="My name is DAMLA";
	char d2[20];
	strcpy(d2,d);
	printf("%s",d2);
	*/
	// strncpy fonksiyonuda kopyalamaya yarar ama kopyan�n yap��t�r�ld��� dizi e az�ndan bir stringe sahip olmal� yoksa hatal� �al���r bu c dilinin buglar�ndand�r
	  /* char d[20]="my name is emily";
	   char d2[20]="";
	   strncpy(d2,d,6);
	   printf("%s",d2);
	   */
	   //strcat 2 diziyi ya da string ifadeyi birle�tirmeye yarar 
	 /*  char d[20];
	   strcpy(d,"my name is");
	   strcat(d," DAMLA");
	   printf("%s",d);
	   */
	   /*char damla[10];
	   printf("enter a text:");
	   fgets(damla,sizeof(damla),stdin);
	   printf("the reverse of your text is:%s",strrev(damla));
	   */
	   /*char dizi[20];
	   printf("enter a text:");
	   fgets(dizi,sizeof(dizi),stdin);
	   printf("the lower conservision of your text is:%s",strlwr(dizi));
	   */
	   /*char damla[20];
	   printf("enter a text:");
	   fgets(damla,sizeof(damla),stdin);
	   printf("the conservision of upper :%s",strupr(damla));
	   */
	   // strstr kullan�m� arat�lan kelimeden sonras�n� ayr� bir dizi olarak yazar
	   /*char damla[60];
	   printf("enter a text:");
	   fgets(damla,sizeof(damla),stdin);
	   char *sub;
	   sub=strstr(damla,"C");
	   printf(" Welcome to %s ",sub);
	   */ // iki adet karakter dizisi olu�turun 
	   /*char d[20]="bonne",d2[20]="soiree";
	   
	   char sonuc[20]="";
	   //strcpy(sonuc,d);
	   //strncpy(sonuc+3,d2,5);
	   strncpy(sonuc,d,3);
	   strncpy(sonuc+3,d2,5);
	   printf("%s",sonuc);
	   
	   */
	   //2 boyutlu dizi olu�turun ve d�rd�nc� eleman�n�n 3 .harfini bas�n
	   /*char damla[10][10]={"one","two","there","four","five"};
	   printf("%c",damla[3][2]);
	   */
	return 0;
}
