#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i\n", "n is positive");
	} else if (n < 0)
	{
		printf("%i\n", "n is negative");
	} else
	{
		printf("%i\n", "n is zero");
	}
	return (0);
}
