#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Discription: Print base 9
 *Return: Always 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
