#include "main.h"
/**
 **cap_string - capitalizes all characctersof a string
 *@s: string
 *Return: s
 */
char *cap_string(char *s)
{
	int i, j, k;
	char no[] = ",;.!?(){}\n\t\" ";

	for (i = 0, k = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			k = 1;
		for (j = 0; no[j] != '\0'; j++)
		{
			if (no[j] == s[i])
				k = 1;
		}

		if(k)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				k = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				k = 0;
			else if (s[i] > 47 && s[i] < 58)
				k = 0;
		}
	}
	return (s);
}
