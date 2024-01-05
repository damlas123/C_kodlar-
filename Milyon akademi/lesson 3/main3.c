#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"Turkish");
	char a='A';
	char k[20]="biliþim dünyasý";
	printf("%c\n",a);
	printf("%s",k);
	return 0;
}
