#include "main.h"
/**
 * _printf - function
 * @format: args
 * Return: Always
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int long_total = 0;

	va_list(args);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch(format[i])
			{
				case 'i':
				long_total += print_int(va_arg(args, int));
				break;
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
