#include <unistd.h>

/**
 *  _putchar - print to standard output
 * @c: Character to print
 * Return: Return value
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
