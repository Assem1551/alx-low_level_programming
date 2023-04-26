#include "variadic_functions.h"
#include <stdarg.h>



int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
va_list ptr ;
va_start (ptr, n);
int i,sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end (ptr);
return (sum);

}
