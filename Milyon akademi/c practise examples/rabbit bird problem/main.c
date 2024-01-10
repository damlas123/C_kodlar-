#include <stdio.h>
#include <stdlib.h>
/* the number of rabbit is:1042 and the grow rate is:3.8% 
 the number of birs is:2272 and the grow rate of bird is:1.2% 
 after how many years the number of rabbit will be more than number of bird*/
int main(int argc, char *argv[]) {
	float different,r=1042,b=2272;
	int y=0;
	different=(r-b);
	while(different < 0){
		r+=(r*3.8)/100;
		b+=(b*1.2)/100;
		different=(r-b);
		y++;	
	}
	printf("%d after year the number of rabbit will be more than the number of bird",y);
	return 0;
}
