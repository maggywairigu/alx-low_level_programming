#include "main.h"
/**
 *_isdigit - checks whether a value is a digit
 *@c: the integer to be checked
 *Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
