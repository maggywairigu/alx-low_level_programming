#include "main.h"
/**
 *_isalpha - Checks if the value is a letter and returns either 1 or 0
 *@letter: character being checked
 *Return: 1 if letter, 0 if otherwise
 */
int _isalpha(int letter)
{
	if (letter > 64 && letter < 123)
		return (1);
	else
		return (0);
}
