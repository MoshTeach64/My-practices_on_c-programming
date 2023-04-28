#include "main.h"
#include <string.h>

void print_rev(char *s)
{
	int i = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
