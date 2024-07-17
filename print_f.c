#include "main.h"
/**
 * _printf - produce output according to a given format
 * @format: a string containig instructions and characters to print
 * Return: the amount of characters printed
 */
int _printf(const char *format, ...)
{
	int long_total = 0, i = 0;

	va_list(args);
	va_start(args, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'i':
				case 'd':
					long_total += print_int(va_arg(args, int));
					break;
				case 'c':
					long_total += print_char(va_arg(args, int));
					break;
				case 's':
					long_total += print_str(va_arg(args, char *));
					break;
				case '%':
					write(1, &format[i], 1);
					long_total++;
					break;
				case '\0':
					return (-1);
				default:
					long_total += _printf("%%%c", format[i]);
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			long_total++;
		}

	}
	return (long_total);
}
