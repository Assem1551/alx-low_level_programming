#include "main.h"
/**
 * 
 * 
 * 
 * 
*/


unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0;
int len = 0;
int base_2 = 1;
if (!b)
{
return (0);
}
while (b[len] != NULL)
{
len++;
}

for (len-- , base_2 = 1; len >= 0; len--, base_2 *= 2)
{
if (b[len]!=0 || b[len] != 1)
{
return (0);
}
if (b[len] == 1)
{
x += base_2;
}
}
return (x);
}
