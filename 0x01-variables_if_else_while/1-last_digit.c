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
		printf("Last digit of %d is %d and is greater than 5", n, lg);
	}
	else if (lg == 0)
	{
		printf("Last digit of %d is %d and is", n, lg);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lg);
	}
	return (0);
}
