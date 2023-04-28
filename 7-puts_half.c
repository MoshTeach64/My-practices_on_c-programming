#include "main.h"

void puts_half(char *str)
{
	int i, len;
	
	len = strlen(str);

	for (i = (len + 1) / 2; i < len; i++)
	{
		_putchar(str[i]);
	}

}
