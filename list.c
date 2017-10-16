#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void print_list(struct node * p){
	if(p==NULL) return;
	printf("[");
	//printf("p->next: %p\n", p->next);
	while(p->next!=NULL){
		//printf("p: %p\n", p);
		//printf("p->next: %p\n", p->next);
		printf("%d, ", p->s);
		p = p->next;
	}
	printf("%d]\n", p->s);
}

struct node * insert_front(struct node * p, int s){
	//printf("allocating %lu bytes\n", sizeof(struct node));
	struct node * ans = (struct node *)malloc(sizeof(struct node));
	ans->s = s;
	ans->next = p;
	return ans;
}

struct node * free_list(struct node * p){
	//printf("freeing\n");
	while(p!=NULL){
		struct node * temp = p->next;
		free(p);
		p = temp;
	}
	//printf("p: %p\n", p);
	return p;
}