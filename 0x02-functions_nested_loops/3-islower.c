#include "main.h"
/**
 *_islower - Checks whether a letter is in lowercase and returns either 1 or 0
 *Return - 1 if lowercase and 0 if otherwise
 */
int _islower(int letter)
{
	if (letter > 96 && letter < 123)
		return (1);
	else
		return (0);
}
