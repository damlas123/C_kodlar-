#include <stdio.h>
#include <stdlib.h>

struct iceskatter{
	char name[10],surname[10];
	int score[10],scor;
};

float calculate(struct iceskatter cal){
	int max,min,sum=0;
	int i;
	max=0;
	min=6;
	for(i=0;i<10;i++){
		if(max < cal.score[i]){
			max=cal.score[i];
		}
		if(min>cal.score[i]){
			min=cal.score[i];
		}
		sum+=cal.score[i];
	}
	sum=(sum-max-min)/8;
	return sum;
}
int main(int argc, char *argv[]) {
	struct iceskatter competitor;
	printf("enter competitors name:");
	scanf("%s",&competitor.name);
	printf("enter competitors surname:");
	scanf("%s",&competitor.surname);
	int i;
	printf("enter scores:");
	for(i=0;i<10;i++){
		scanf("%d",&competitor.score[i]);
	}
	float scro=calculate(competitor);
	printf("the score is:%f",scro);
	
	return 0;
}

