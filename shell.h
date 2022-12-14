#ifndef SHELL_H
#define SHELL_H

/* include file */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/wait.h>

/*string handler function */
int _strcmp(char *s1, char *s2);

/* input handes */
int _handler(void);


#endif
