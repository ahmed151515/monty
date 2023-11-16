#include "monty.h"
stack_t *top = NULL;
int size = 0;
/**
 * main - main
 * @ac: ac
 * @av: av
 * Return: int
 */
int main(int ac, char **av)
{
	FILE *fd = fopen(av[1], "r");
	char s[buf], **commands;
	char *t;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	do
	{
		t = fgets(s, buf, fd);
		if (t == NULL) 
		{
			return (EXIT_SUCCESS);
		}
		cut_space(s);
		commands = set_comand(s);
		if (combar(commands[0], "push"))
		{
			push(atoi(commands[1]));
		}
		else if (combar(commands[0], "pall"))
                {
                        pall();
                }

		/*while (i < 3)
		{
			free(commands[i]);
			i++;
		}*/
	}while (t != NULL);

	return (EXIT_SUCCESS);
}
