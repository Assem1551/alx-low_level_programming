#include "main.h"
/**
 * _strspn - Returns the number of bytes
 * @s: parameter1
 * @accept: parameter2
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
int *m = malloc (b);
if ( m==0 )
{
exit (98);
}


return (m);

}