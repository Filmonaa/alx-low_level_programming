#include "main.h"

/**
 * print_line - Draw a straight line using a character __.
 * @n: The number of _ characters to be printed out.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (line = 0; line <= n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
