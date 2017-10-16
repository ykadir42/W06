#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * p){
	if(p==NULL) return;
	printf("[");
	while(p->next!=NULL){
		printf("%s, ", p->s);
		p = p->next;
	}
	printf("%s]\n", p->s);
}

struct node * insert_front(struct node * p, char * s){
	struct node * ans = (struct node *)malloc(sizeof(struct node));
	struct node new;
	*ans = new;
	new.s = s;
	new.next = p;
	return ans;
}

struct node * free_list(struct node * p){
	while(p!=NULL){
		struct node * temp = p->next;
		free(p);
		p = temp;
	}
	return p;
}