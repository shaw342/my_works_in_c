#include <stdio.h>
#include <stdlib.h>
nt main(void)
{
	int array[3] = {1,2,3};
	int i;
	int tmp;

	for (i = 0 ;i < 3/2;i++)
	{
		tmp = array[i];
		array[i] = array[3-i-1];
		array[3-i-1] = tmp;
	}
	for (i = 0 ; i < 3; i++)
	{
		printf("%d\n",array[i]);
	}
	
	return (0);
}
