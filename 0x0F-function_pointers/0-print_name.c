#include "function_pointers.h"
/**
 * print_name - Calls a function pointer with a name parameter
 *
 * @name: Pointer to a character array holding the name to be printed
 * @f: Function pointer that takes a char pointer parameter and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
