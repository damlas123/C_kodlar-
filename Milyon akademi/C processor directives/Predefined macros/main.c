#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define CIRCLE_AREA(r) PI*r*r
int main(int argc, char *argv[]) {
	
	printf("%s\n",__FILE__);//dosyanýn içinde bukudnuðu konumu gösterir
	printf("%s\n",__DATE__);//þuan bulunan tarihi gösterir
	printf("%s\n",__TIME__);//þuan bulunan saati gösterir
	printf("%d\n",__STDC__);// derleyicinin standart c dilini destekleyip desteklemediðini gösterir desteklerse 1 desteklemezse 0
	printf("%d\n",__LINE__);// kodun yazýldýðýn satýrýn sýrasýný gösterir
	return 0;
}
