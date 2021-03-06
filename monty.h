#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

size_t print_dlistint(const stack_t *top);
stack_t *add_dnodeint(stack_t **top, const int n);
int delete_dnode(stack_t **top, int row);
void get_top_n(const stack_t *top, int row);
int swap(stack_t **top, int row);
int add(stack_t **top, int row);
void check_mfile(int ac);
int _isnumber(const char *c);
void clean_stack(stack_t **top);
void push_error_1(int row);
void no_command_error(int row);
void malloc_error(void);
int delete_dnode_c(stack_t **top);
int mul(stack_t **top, int row);
int sub(stack_t **top, int row);
int dividir(stack_t **top, int row);
int modulo(stack_t **top, int row);

#endif
