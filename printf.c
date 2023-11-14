#include "main.h"

/**
 * _printf - Outputs according to a format
 *
 * @format: character string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int num;
	int counter = 0;
	char chr;
	char *s;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				counter += print_c('%');
			} else if (*format == 'c')
			{
				chr = (va_arg(arg, int));
				counter += print_c(chr);
			} else if (*format == 's')
			{
				s = (va_arg(arg, char *));
				counter += print_s(s);

			} else if (*format == 'd' || 'i')
			{
				num = (va_arg(arg, int));
				counter += print_n(num);
			} else
			{
				counter += print_c('%');
				counter += print_c(*format); }
		} else
		{
			counter += print_c(*format);
		}
		format++; }
	va_end(arg);
	return (counter); }
