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
			swich(format[i])
			{
				case 'i':
				long_total += print_int(va_args(args, int));
				break;
				case 'c':
				long_total += print_char(va_args(args, int));
				break;
				case 's':
				long_total += print_string(va_args(args, char *));
				break;
				case '%':
				write(1, '%', 1);
				long_total++;
				break;
				case default:
				break;
			}
		}
		else
		{
			write(1, format[i], 1);
			long_total++;
		}

	}
		return (long_total);

}
