#include "main.h"
/**
 * _printf - our project
 * @format: the format haha
 * Return: number the length of it
 */
int _printf(const char *format, ...)
{
	int len = 0, indexf = 0, j;
	va_list args;

	Sru_t objs[] = {{"c", fun_ch}, {"s", print_str}, {"d", fun_intt},
			{"i", fun_intt}, {NULL, NULL}};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (indexf = 0; format[indexf] != '\0'; indexf++)
	{
		if (format[indexf] != '%')
		{
			len += write(1, &format[indexf], 1);
		}
		else
		{
			indexf++;
			j = 0;
			for (j = 0; objs[j].specf != NULL; j++)
			{
				if (format[indexf] == '%')
				{
					len += write(1, "%", 1);
					break;
				}

				else if (*(objs[j].specf) == format[indexf])
				{
					len = objs[j].ptr_f(args) + len;
					if (len == -1)
						return (-1);
					break;
				}
			}
		}
	}
	va_end(args);
	return (len);
}
