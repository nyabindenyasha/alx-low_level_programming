#include "main.h"

/**
 * cap_string - capitalize each word in a sentence
 * @str: input string
 *
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int i, j;
	char seperated[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (seperated[j] == str[i - 1])
						str[i] -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
