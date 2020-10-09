// Stack_list.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h>
#include <conio.h>
#include "library.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bool f=true;
	Stack stack;
	setlocale(LC_ALL, "rus");
	init(stack);
	cout << "Select an action: \n\t1-add to stack, \n\t2-remove from stack, \n\t3-read from stack, \n\t4-to finish work" << endl;
	while(f)
	{
		int c,x;
		cin >> c;
		switch (c)
		{  
		  case 1: cout << "Enter the value to add " << endl;
				  cin >> x;
				  push(stack,x);
				  cout << "Value added " << x << endl;
				  break;
		  case 2: if (empty(stack))
					  cout << "Stack is empty!" << endl;
				  else
					  cout << "Value removed " << pop(stack) << endl;
			      break;
		  case 3:  if (empty(stack))
					  cout << "Stack is empty!" << endl;
				  else
					  cout << "At the top of the stack is the value " << peep(stack) << endl;
				  break;
		  case 4: f = false;
				  break;
		}
	}
	return 0;
}

