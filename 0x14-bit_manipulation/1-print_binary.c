#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	int i;
	for  (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		_putchar((n >> i) & 1 ? '1' : '0');
	}
		_putchar('0');
}
