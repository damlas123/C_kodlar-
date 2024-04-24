#include <stdio.h>
#include <stdlib.h>
typedef enum {
	january=1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	november,
	october,
	december,
}months;
void printscreen (months name){
	switch(name){
		case january:
			{
				printf("january");
				break;
			}
			case february:
			{
				printf("february");
				break;
			}
			case march:
			{
				printf("march");
				break;
			}
			case april:
			{
				printf("april");
				break;
			}
			case may:
			{
				printf("may");
				break;
			}
			case june:
			{
				printf("june");
				break;
			}
			case july:
			{
				printf("july");
				break;
			}
			case august:
			{
				printf("august");
				break;
			}
			case september:
			{
				printf("september");
				break;
			}
			case november:
			{
				printf("november");
				break;
			}
			case october:
			{
				printf("october");
				break;
			}
			case december:
			{
				printf("december");
				break;
			}
			default:
			{
				printf("you enter wrong name");
				break;
			}
	}
}

int main(int argc, char *argv[]) {
	months damla=9;
	printscreen(damla);
	return 0;
}
