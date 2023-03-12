#include <stdio.h>
#include "main.h"
int _strlen(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	return (i);
}
