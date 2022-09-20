#include "main.h"
#include <string.h>

/**
 * print_rev -prints a string in reverse
 * @s: the value to print to stdout
 */
void rev_string(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
