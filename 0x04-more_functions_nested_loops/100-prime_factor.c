#include <stdio.h>

/**
 * main - print largest prime factor.
 * Return: Always 0.
 */
int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / i;
	}

	printf("%lu\n", fp);

	return (0);
}
