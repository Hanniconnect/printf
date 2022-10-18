#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list args)
{

	char *r = va_arg(args, char *);
	int i;
	int j = 0;

	if (r == NULL)
		r = "(null)";
	while (r[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(r[i]);
	return (j);
}
