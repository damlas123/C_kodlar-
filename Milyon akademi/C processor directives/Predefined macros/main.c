#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define CIRCLE_AREA(r) PI*r*r
int main(int argc, char *argv[]) {
	
	printf("%s\n",__FILE__);//dosyan�n i�inde bukudnu�u konumu g�sterir
	printf("%s\n",__DATE__);//�uan bulunan tarihi g�sterir
	printf("%s\n",__TIME__);//�uan bulunan saati g�sterir
	printf("%d\n",__STDC__);// derleyicinin standart c dilini destekleyip desteklemedi�ini g�sterir desteklerse 1 desteklemezse 0
	printf("%d\n",__LINE__);// kodun yaz�ld���n sat�r�n s�ras�n� g�sterir
	return 0;
}
