#include "monty.h"


int main(void)
{
    stack_t *top;

    top = NULL;
    add_dnodeint(&top, 0);
    add_dnodeint(&top, 1);
    add_dnodeint(&top, 2);
    add_dnodeint(&top, 3);
    add_dnodeint(&top, 4);
    add_dnodeint(&top, 98);
    add_dnodeint(&top, 402);
    add_dnodeint(&top, 1024);
    printf("-----------------\n");
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
    printf("lest sum!!!!!\n");
    add(&top);
    printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
	printf("top number: %i\n", get_top_n(top));
    printf("lest swap!!!!!\n");
    swap(&top);
    print_dlistint(top);
    printf("-----------------\n");
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
	printf("top number: %i\n", get_top_n(top));
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
	printf("top number: %i\n", get_top_n(top));
    printf("-----------------\n");
    delete_dnode(&top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    printf("-----------------\n");
    delete_dnode(&top);
    print_dlistint(top);
    return (0);
}
