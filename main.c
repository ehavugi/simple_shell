#include "shell.h"


/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
	char *buf;
	size_t bufsize = 256;
	int characters;

	buf = (char *) malloc(bufsize * sizeof(char));
	if (buf == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	while (1)
	{
		printf("(hsh$) ");
		characters = getline(&buf, &bufsize, stdin);
		if (_strcmp(buf, "exit\n") == 0 || characters == -1)
		{
			return (0);
		}
		_handler(buf);
	}
}

