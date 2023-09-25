#ifndef _LISTS_H_
#define _LISTS_H_

/* C std-lib header files */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes */
void _puts(char *str);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif