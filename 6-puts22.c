#include "main.h"

void puts2(char *str)
{
	int i, len;
	
	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0 )
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
