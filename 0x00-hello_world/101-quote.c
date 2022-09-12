#include<unistd.h>
/**
 * main - prints: "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19
 *
 * Return: 1 if properly exited, non 1 if otherwise
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
