#define "main.h"
#include <string h>

/**
 * The  memcpy()  function  copies  n bytes from memory area src
 *to memory area dest.
 * _memcpy() function copies n bytes
 * from memory area src to memory area dest
 *
 * @dest: The destination address
 * @src: The address of memory to print
 * @n: The size of the memory to print
 *
 * Returns: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char *dest = dest;
	char const *Psrc = src;

	for (count = 0; count <= n; count++)
	{
		*dest++ = *Psrc++;
	}
	return (dest);
}
