#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13
 /*struct cards{
 	const char *face;
 	const char *suit;
 };
int main(int argc, char *argv[]) {
	struct cards myCards;
	myCards.face="ACE";
	myCards.suit="Spades";
	struct cards *cardPtr=&myCards;
	printf("%s of %s\n",myCards.face,myCards.suit);
	printf("%s of %s\n",cardPtr->face,cardPtr->suit);
	printf("%s of %s\n",(*cardPtr).face,(*cardPtr).suit);
	return 0;
}*/
  
  struct card{
  	const char *face;
  	const char *suit;
  };
 
 typedef struct card Card;
 void fillDeck(Card * const deck,const char *faces[],const char *suits[] );
 void shuffle(Card *const deck);
 void deal(const Card *const deck);
 int main(){
 	Card deck[CARDS];
 	
 	const char *faces[]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Quenn","King"};
 	const char *suits[]={"Hearts","Diamonds","Clubs","Spades"};
 	srand(time(NULL));
 	fillDeck(deck,faces,suits);
 	shuffle(deck);
 	deal(deck);
 	return 0;
 }
 void fillDeck (Card *const deck ,const char *faces[],const char *suits[]){
 int i;
 	for( i=0;i<CARDS;++i){
 		deck[i].face=faces[i%FACES];
 		deck[i].suit=suits[i/FACES];
	 }
 }
 void shuffle(Card *const deck){
 int i;
 for(i=0;i<CARDS;++i){
 	size_t j=rand()%CARDS;
 	Card temp =deck[i];
 	deck[i]=deck[j];
 	deck[j]=temp;
 }
}
void deal (const Card * const deck){
	int i;
	for(i=0;i<CARDS;++i){
		printf("%5s of %-8s%s",deck[i].face,deck[i].suit,(i+1)%4? "  " : "\n");
	}
}
