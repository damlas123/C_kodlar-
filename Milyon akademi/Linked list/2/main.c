#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
	struct n *next;
}node;
void bastir (node *r){
	while(r!=NULL){
		printf("%d",r->x);
		r=r->next;
	}
}
int main(int argc, char *argv[]) {
    node *root;
    root=(node *)malloc(sizeof(node));
    root->x=500;
    node *iter;
    
    int i;
	for(i=0;i<5;i++){
		iter->next=(node *)malloc(sizeof(node));
		iter=iter->next;
		iter->x=i*10;
		iter->next=NULL;
	}
	bastir(root);
	return 0;
}
