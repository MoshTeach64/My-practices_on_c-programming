#include "main.h"
#include <string.h>

void puts2(char *str)
{
	int i, digit;

	for (i = 0; str[i] != '\0'; i++)
	{
		digit = i % 2;

		if (digit == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
