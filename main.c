#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		printf("%d, %s\n", characters, buf);
		if (strcmp(buf, "q!\n") == 0 || strcmp(buf, "exit\n") == 0 || characters < 0)
		{
			return (0);
		}
	}
}

