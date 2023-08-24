#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints length and string and then returns the amount of nodes
 * @h: Pointer to struct constant
 * Return: Amount of nodes
**/

size_t print_list(const list_t *h)
{
unsigned int count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;

count++;
}

return (count);
}
