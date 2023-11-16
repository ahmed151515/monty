#include "monty.h"
/**
 * set_comand - set_comand
 * @s: string
 * Return: string
 */
char **set_comand(char *s)
{
	char *deilm = " \n";
	char *tok;
	char **cmd;

	if (s == NULL)
	{
		return (NULL);
	}

	cmd = malloc(sizeof(char *) * 2);
	if (cmd == NULL)
	{
		return (NULL);
	}
	tok = strtok(s, deilm);
	if (tok == NULL)
	{
		free(cmd);
		return (NULL);
	}
	cmd[0] = malloc(strlen(tok) + 1);
	if (cmd[0] == NULL)
	{
		free(cmd);
		return NULL;
	}
	strcpy(cmd[0], tok);
	tok = strtok(NULL, deilm);
	if (tok == NULL)
	{
		cmd[1] = NULL;
		return (cmd);
	}
	cmd[1] = malloc(strlen(tok) + 1);
	if (cmd[1] == NULL)
	{
		free(cmd[0]);
		free(cmd);
		return NULL;
	}
	strcpy(cmd[1], tok);
	return (cmd);
}
