#include "main.h"
/**
 * print_int - take an int and print its numbers
 * @a: int to print
 * Return: the amount of characters printed
 */
int print_int(int a)
{
	int total = 0;
	int b = a % 10 + '0';

	if (a < 0)
	{
		write(1, "-", 1);
		total++;
		if (a == -2147483648)
		{
			write(1, "2147483648", 10);
			return (total + 10);
		}
		total += print_int(-a);
	}
	if (a >= 0)
	{
		if (a / 10 > 0)
		{
			total++;
			total += print_int(a / 10);
			write(1, &b, 1);
		}
		else
		{
			write(1, &b, 1);
			total++;
		}
	}
	return (total);
}
/**
 * print_char - prints a single char
 * @a: a single char to print
 * Return: the amount of characters printed
 */
int print_char(int a)
{
	int total = 0;

	write(1, &a, 1);
	total++;
	return (total);
}
/**
 * print_str - prints a string
 * @a: a string to print
 * Return: the amount of characters printed
 */
int print_str(char *a)
{
	int total = 0;
	int i;

	if (a == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		total++;
		write(1, &a[i], 1);
	}
	return (total);
}

