#include "main.h"

/**
 * print_last_digit : last digit
 * @c : caracter
 * Return: 1 or 0
 */

int print_last_digit(int c)
{
	int last_number;

	last_number = c % 10;
	if (last_number < 0)
	{
		_putchar(-last_number + 48);
		return (-last_number);
	}
	else
	{
		_putchar(last_number + 48);
		return (last_number);
	}
}
