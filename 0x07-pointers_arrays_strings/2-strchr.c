#include "main.h"
#include <stddef.h>

/**
 * _strchr - Write a function that locates a character in a string.
 * The _strchr Returns a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 *
 * @s: This is the input string
 * @c:  This is the character
 * Return: Return to the character found, if not return a NULL
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
