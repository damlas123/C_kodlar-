#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//dikd�rtgenler prizmas�n�n s�ras�yla taban alan�n�,yanal alanlar�n�n toplam�n�, toplam alan� ve hacmini ekrana bas�n
	 int a,b,c;
	  printf("enter length and high sequently:");
	  scanf("%d%d%d",&a,&b,&c);
	  int t,y,ta,h;
	  t=a*b;
	  y=((5+7)*2)*10;
	  ta=(a*b+b*c+a*c)*2;
	  h=a*b*c;
	  printf("the lenght of base is:%d\nthe sum of area of sides is:%d\nthe total area is:%d\nthe volume is:%d\n",t,y,ta,h); 
	
	return 0;
}
