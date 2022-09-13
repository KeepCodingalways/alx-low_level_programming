#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Access (0) Success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 103)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
