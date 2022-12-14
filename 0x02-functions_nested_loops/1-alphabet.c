#include "main.h"

/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: n success 1.
 */

void print_alphabet(void)

{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;

	}

	_putchar('\n');

}
