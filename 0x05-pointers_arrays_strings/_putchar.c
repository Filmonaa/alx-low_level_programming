#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: on success 1
 */
int _putchar(car c)
{
	return (write(1, &c, 1));
}
