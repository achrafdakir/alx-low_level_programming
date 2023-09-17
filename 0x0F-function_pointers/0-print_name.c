#include "function_pointers.h"

/**
  * print_name - Function that prints a name.
  * @name: Input name
  * @f: Pointer function
  *
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
