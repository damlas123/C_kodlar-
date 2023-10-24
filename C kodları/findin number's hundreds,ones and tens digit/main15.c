#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   int a,hundreds,tens,ones;
   a=198;
   hundreds=a/100;
   tens=(a/10)%10;
   ones=a%10;
   printf("the hundreds digit of a:%d\n",hundreds);
   printf("the tens digit of a:%d\n",tens);
   printf("the ones digit of a:%d",ones);
	
	return 0;
}
