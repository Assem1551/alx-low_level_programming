#include "main.h"
/**
 * *malloc_checked- Returns the number of bytes
 * @b: parameter1
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
{
exit(98);
}
return (m);

}
