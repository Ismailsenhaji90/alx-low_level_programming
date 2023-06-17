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
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	printf("\n");
	return (0);
}
