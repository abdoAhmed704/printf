#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct opp - the struct of the printf
 * @specf: the specifier that will in printf
 * @ptr_f: pointer to the functions
 */
typedef struct opp
{
	char *specf;
	int (*ptr_f)();
} Sru_t;

int _printf(const char *format, ...);
int _putchar(char a);
int fun_ch(va_list args);
int fun_intt(va_list args);
int print_str(va_list args);
#endif
