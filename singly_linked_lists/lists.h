#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string
 * @len: longitud
 * @next: pointer
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
