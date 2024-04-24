#include <stdio.h>
#include <stdlib.h>

struct iceskater{
	char name[10],surname[10];
	float score[10],total;
};
float calculate(struct iceskater sum){
	int i;
	float max=0.0;
	float min=6.0;
	float tot=0;
	for(i=0;i<10;i++){
		if(sum.score[i]>max){
			max=sum.score[i];
		}
		if(sum.score[i]<min){
			min=sum.score[i];
		}
		tot+=sum.score[i];
	}
	tot=(tot-max-min)/8;
	return tot;
}
int main(int argc, char *argv[]) {
	int n;
	printf("how mony competitor entered the competition:");
	scanf("%d",&n);
	char row;
	struct iceskater competitors[100];
	printf("%c",row);
	int j,i,birinci;
	float max=0.0;
	for(i=0;i<n;i++){
		printf("enter competitor name:");
		gets(competitors[i].name);
		
		printf("%c",row);
		
		printf("enter competitor surname:");
		gets(competitors[i].surname);
		
		printf("enter score :");
		for(j=0;j<10;j++){
			scanf("%f",&competitors[i].score[j]);
			competitors[i].total+=competitors[i].score[j];
		}
		
		competitors[i].total=calculate(competitors[i]);
		printf("%f is the score\n",competitors[i].total);
		if(competitors[i].total>max){
			birinci=i;
			max=competitors[i].total;
		}
		
	}
	printf("\nthe winner is %s\t%s and the score is :%f",competitors[birinci].name,competitors[birinci].surname,max);
	return 0;
}
