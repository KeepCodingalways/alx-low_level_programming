#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpbet[] = "a, b, c, d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,z";
	int i = 0;

	while (i < sizeof(alpbet))
	{
		putchar(tolower(alpbet[i]));
		i++;
	}
	return (0);
}
