#include "stdafx.h"

struct Elem							
{
  int info;
  Elem* next;
};

typedef Elem* Stack;

void init(Stack &);  // stack initialization
bool empty (Stack);  // check stack for empty
int pop(Stack &);    // remove item
void push(Stack &, int); // add item
int peep(Stack);     // read item at top of stack