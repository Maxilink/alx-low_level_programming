
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98.
 * @n: input number.
 * Return: no return.
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);

	printf("\n");

}
