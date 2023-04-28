#include "main.h"

void _puts(char *str)
{
	/*while (*str)
	{
		_putchar(*str);
		str++;
	}*/
	
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

}
