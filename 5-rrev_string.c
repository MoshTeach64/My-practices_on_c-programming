#include "main.h"

void rev_string(char *s)
{
	int i, j; 
	int temp;
	
	j = strlen(s);
   
	for (i = 0; i < j/2; i++)
	{
		temp = s[i];
		s[i] = s[j - i - 1];
		s[j - i -1] = temp;
	}
	_putchar('\n');
}
