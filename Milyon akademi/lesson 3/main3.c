#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	char a='A';
	char k[20]="bili�im d�nyas�";
	printf("%c\n",a);
	printf("%s",k);
	return 0;
}
