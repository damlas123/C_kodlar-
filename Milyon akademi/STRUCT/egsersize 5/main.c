#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define n 2
struct takim{
	char name[10];
	char surname[10];
	int age;
	int score;
};
struct team{
	char team_name[20];
	struct takim player1;
	struct takim player2;
};
void create_team(struct team *e){
	int i;
	for(i=0;i<n;i++){
		printf("enter team name:");
		scanf("%s",&e->team_name);
		player(e->player1);
		player(e->player2);
	}
}
void player(struct takim *j){
     int i=0;
		printf("enter player %d name:",i+1);
		scanf("%s",&j->name);
		printf("enter player %d surname:",i+1);
		scanf("%s",&j->surname);
		getchar();
		printf("enter %d age:",i+1);
		scanf("%d",&j->age);
		printf("enter %d score:",i+1);
		scanf("%d",&j->score);
	}
void print_team(struct team *e){
	printf("\nTeam name:%s\n",e->team_name);
	printf("first player:\n");
	print_pl(e->player1);
	printf("\nsecond player:\n");
	print_pl(e->player2);
}
void print_pl(struct takim *j){
	printf("%s\t%s\t%d\t%d",j->name,j->surname,j->age,j->score);
}
int main(){
	struct team tab[n];
	int i;
	for(i=0;i<n;i++){
		printf("Team:%d",i+1);
		create_team(&tab[i]);
	}
	for(i=0;i<n;i++){
		printf("Team:%d",i+1);
		print_team(&tab[i]);
	}
	return 0;
}
