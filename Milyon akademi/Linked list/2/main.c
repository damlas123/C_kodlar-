#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
	struct n *next;
}node;
int main(int argc, char *argv[]) {
	node *root;
	root=(node *)malloc(sizeof(node));
	root->x=20;
	root->next=(node *)malloc(sizeof(node ));
	root->next->x=25;
	root->next->next=(node *)malloc(sizeof(node));
	root->next->next->x=30;
	root->next->next->next=NULL;
	node *iter;
	iter=root;
	int i;
	while(iter!=NULL){
		printf("%d. value is %d\n",i,iter->x);
		iter=iter->next;
		i++;
	}
	return 0;
}
