#include "main.h"
/**
 *_isupper - checks whether a letter is capital
 *@c: the letter being checked
 *Return: 1 if the letter is capital and 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
