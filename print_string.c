#include "main.h"

/**
 * print_str - print the str
 * @args: the string argument
 * Return: the length
 **/

int print_str(va_list args)
{
	char *ch;
	int length = 0;
	int i = 0;

	ch = va_arg(args, char *);
	if (ch == NULL)
		ch = "(null)";

	while (ch[i])
	{
		write(1, &ch[i], 1);
		length++;
		i++;
	}
	return (length);
}
