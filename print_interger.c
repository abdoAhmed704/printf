#include "main.h"
/**
 * fun_intt - print the number as int
 * @args: the argument num
 * Return: length of numbers
*/

int fun_intt(va_list args)
{
	char digit;
	unsigned int cst;
	int num;
	int exxpp = 1;
	int len = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		len += write(1, "-", 1);
		num *= -1;
	}
	cst = num;

	while (cst / exxpp > 9)
		exxpp = 10 * exxpp;

	while (exxpp)
	{
		digit = (cst / exxpp) + '0';
		len = write(1, &digit, 1) + len;
		cst = cst % exxpp;
		exxpp = exxpp / 10;
	}
	return (len);
}

