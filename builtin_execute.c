#include "shell.h"
/**
* builtin_execute - executes comands
* @tokens: pointer to array
* Return: tokens
**/
int builtin_execute(char **tokens)
{
	int status;
	size_t length;
	size_t num;
	size_t i;

/*delete and see*/
	built_s builtin[] = {
		{"exit", shell_exit},
		{"env", shell_env},
		{NULL, NULL}
	};
	/*delete*/
	if (tokens[0] == NULL)
		return (1);

	length = _strlen(tokens[0]);

	num = shell_num_builtins(builtin);
	for (i = 0; i < num; i++)
	{
		if (_strcmp(tokens[0], builtin[i].name, length) == 0)
		{
			status = (builtin[i].p)();
			return (status);
		}
	}
	return (1);
}

/**
* shell_num_builtins - this check num built-ins
* @builtin: takes the builtin to be counted
* Return: num of built-ins
**/

int shell_num_builtins(built_s builtin[])
{
	unsigned int i;

	i = 0;
	while (builtin[i].name != NULL)
		i++;

	return (i);
}
