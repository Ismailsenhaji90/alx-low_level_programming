#include "main.h"

/**
 * _abs - print the abs
 * @c : caracter
 * Return: c
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs;
	
	abs = c * -1;
	return (abs);
	}
	return (c);
}
