#ifndef STACK_FUNCTIONS_H
#define STACK_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node *next;
};

struct node *head;

void push();
void pop();
void display();

#endif