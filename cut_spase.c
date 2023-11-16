#include "monty.h"
/**
 * cut_space - sd
 * @str: s
 * Return: new s
 */
void cut_space(char *str)
{
	int i, j = 0;
	int inWord = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			str[j++] = str[i];
			inWord = 1;
		}
		else
		{
			if (inWord)
			{
				str[j++] = ' ';
				inWord = 0;
			}
		}
	}

	if (j > 0 && str[j - 1] == ' ')
	{
		str[j - 1] = '\0';
	}
	else
	{
		str[j] = '\0';
	}
}
