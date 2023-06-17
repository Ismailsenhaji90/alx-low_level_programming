#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Discription: Qlphqbetics
 * Return: always 0
 */
int main(void)
{
	int n;
	int lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg = n % 10;
	if (lg > 5)
	{
		printf("Last digit of %d is %d  greater than 5", n, lg);
	}
	else if
	{
		printf("Last digit of %d is %d is 0", n, lg);
	}
	else
	{
		printf("last digit of %d is %d and less than 6 and not 0:", n, lg);
	}
	return (0);
}
