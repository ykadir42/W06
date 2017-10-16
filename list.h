struct node {char * s; struct node * next;};
void print_list(struct node * p);
struct node * insert_front(struct node * p, char * s);
struct node * free_list(struct node * s);