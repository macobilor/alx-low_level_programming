#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by bwave ict
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizedof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizedof(b));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizedof(c));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizedof(d));
	printf("Size of a float: %lu byte(S)\n", (unsigned long)sizedof(f));
	return (0);
}
