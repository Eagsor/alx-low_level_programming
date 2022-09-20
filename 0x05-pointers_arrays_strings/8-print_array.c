#include "main.h"

/**
 * Description: Numbers must be separated by comma and space.
 * @n: checks the code for integer of n
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}

