#include "main.h"
/**
 *rev_string - reverses a string
 *@s: the string to be reversed
 *Description: Reverses the string from pointer s
 */
void rev_string(char *s)
{
	int i,j,l;
	char k;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, j = 0; j < l / 2; i--, j++)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
	}
}
