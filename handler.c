#include "shell.h"
/**
 * _handler - handle the given command
 *
 * @buf: pointer to input
 *
 * Return: void
 */
void _handler(char *buf)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	int error;

	printf("before execute");
	error = execve(argv[0], argv, NULL);

	if (error == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return ;
}
