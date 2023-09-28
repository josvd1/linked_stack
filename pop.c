#include "stack_functions.h"

void pop()
{
	int item;

	struct node *ptr;
	if (head == NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		item = head -> val;
		ptr = head;
		head = head -> next;
		free(ptr);
		printf("Item popped\n");
	}
}