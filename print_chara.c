#include "main.h"

/**
 * fun_ch - print character
 * @args: the character
 * Return: just one
 */
int fun_ch(va_list args)
{
	char ch = va_arg(args, int);

	write(1, &ch, 1);
	return (1);
}
