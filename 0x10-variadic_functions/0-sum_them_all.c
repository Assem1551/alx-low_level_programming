#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of the arguments
 * @n : number of arguments given
 * Return: the sum of the the arguments
*/


int sum_them_all(const unsigned int n, ...)
{
va_list ptr;
unsigned int i;
int sum = 0;

if (n == 0)
{
return (0);
}

va_start(ptr, n);
for (i = 0 ; i <  n; i++)
{
sum += va_arg(ptr, unsigned int);
}
va_end(ptr);
return (sum);

}
