#include "main.h"
/**
 *positive_or_negative - test number
 *@i: int to be added
 *Return: no return
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
