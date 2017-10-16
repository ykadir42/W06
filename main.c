#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
	printf("start\n");
	struct node * head = NULL;
	head = insert_front(head, 3);
	printf("head: %p\n", head);
	head = insert_front(head, 2);
	printf("head: %p\n", head);
	//head = insert_front(head, 1);
	//printf("head: %p\n", head);
	printf("starting to print");
	print_list(head);
	free_list(head);
	return 0;
}