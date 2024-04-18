#include <stdio.h>
#include <stdlib.h>
void Fun1(int *array,int leftIndex,int rightIndex);

int main(int argc, char *argv[]) {
	int StudentNumber[15];
	int i=0,k,ReDnUM;
	printf("ENTER your student number then press enter button:");
	while(1){
	
	ReDnUM=getch();
	if(ReDnUM==13){
		break;
	}
	putchar(ReDnUM);
	StudentNumber[i]=(int)(ReDnUM-'0');
	i++;
}
Fun1(StudentNumber,0,i-1);
printf("\nthe array after fun1:\n");
for(k=0;k<i;k++){
	printf("%d",StudentNumber[k]);
}

	return 0;
}
void swap(int *array,int leftIndex,int rightIndex){
	int temp;
	if(array[leftIndex]<array[rightIndex]){
		array[leftIndex]=array[rightIndex];
		array[rightIndex]=temp;
	}
}
void Fun1(int *array,int leftIndex,int rightIndex){
	if(leftIndex<rightIndex){
		swap(array,leftIndex,rightIndex);
		Fun1(array,leftIndex+1,rightIndex-1);
	}
}
