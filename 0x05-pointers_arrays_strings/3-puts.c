#include "main.h"
/**
 *_puts - prints a value of a variable
 *@str: pointer with the string value to be printed
 *Description: prints out the value of*str
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
