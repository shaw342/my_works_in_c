#include <stdio.h>
#include "main.h"
int main(void)
{
	char *str;
	int len;
	
	str = "hello world";
	len = _strlen(str);
	printf("%d\n",len);
	
	return (0);
}
