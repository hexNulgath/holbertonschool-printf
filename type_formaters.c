#include "main.h"

int print_int(int a)
{
	int total = 0;
	int b = a % 10;

	if (a > 0)
	{
		total++;
		total += print_int(a / 10);
		write(1, &b, 1);
	}
	return (total);
}

int print_char(int a)
{
	int total = 0;
	
	write(1, &a, 1);
	total++;
	return (total);
}

int print_str(char *a)
{
	int total = 0;
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		write(1, &a[i], 1);
		i++;
	}
	return (total);
}

