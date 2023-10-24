#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,tensdigit,onesdigit;
    a=74;
	tensdigit=a/10;
	onesdigit=a%10;
	printf("tensdigit:%d\n",tensdigit);
	printf("onesdigit:%d",onesdigit);
	return 0;
}
