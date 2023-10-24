
#include <stdio.h>
#include <stdlib.h>

int main() {
   int longLine,shortLine,area,perimeter;
   printf("please enter your longline:");
   scanf("%d",&longLine);
   printf("please enter your shortLine:");
   scanf("%d",&shortLine);
   area=shortLine*longLine;
   perimeter=(shortLine+longLine)*2;
   printf("area:%d\nperimeter:%d",area,perimeter);

	return 0;
}
