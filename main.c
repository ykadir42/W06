#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
	printf("start\n");
	struct node * head = NULL;
	head = insert_front(head, "first");
	printf("head: %p\n", head);
	head = insert_front(head, "FIRST!!!");
	printf("head: %p\n", head);
	head = insert_front(head, "NO I'M FIRST >:D");
	printf("head: %p\n", head);
	print_list(head);
	free_list(head);
	return 0;
}