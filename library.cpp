#include "stdafx.h"
#include "library.h"

void init(Stack &st)
{ // stack initialization
	st = NULL;
}

bool empty (Stack st)
{ // check stack for empt
	return st == NULL;
}

int pop(Stack &st)
{ // remove item
	Elem* q;
	q = st;
	st = st->next;
	return q->info;
}

void push(Stack &st, int x)
{ // add item
	Stack q;
	q = new Elem;
	q->info = x;
	q->next = st;
	st = q;
}

int peep(Stack st)
{ // read item at top of stack
	return st->info;
}