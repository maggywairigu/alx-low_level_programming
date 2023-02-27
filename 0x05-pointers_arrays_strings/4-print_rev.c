#include "main.h"
/**
 *print_rev - print a string value in reverse
 *@s: pointer with the string values address
 *Description: prints the value of *s in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
