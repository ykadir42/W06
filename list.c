#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * p){
	if(p==NULL) return;
	printf("printing");
	printf("[");
	while(p->next!=NULL){
		printf("%d, ", p->s);
		p = p->next;
	}
	printf("%d]\n", p->s);
}

struct node * insert_front(struct node * p, int s){
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