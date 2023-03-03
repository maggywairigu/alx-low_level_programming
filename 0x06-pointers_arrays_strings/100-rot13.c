#include "main.h"
/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */
char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
			*p += 13;
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
			*p -= 13;
		p++;
	}

	p = s;
	while (*p)
	{
		for (i = 0; i < 13; i++)
		{
			if (*p == '[')
				*p = 'A';
			else if (*p == '{')
				*p = 'a';
			else
				(*p)++;
		}
		p++;
	}

	return s;
}
