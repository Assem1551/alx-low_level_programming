#include "main.h"
/**
 * *malloc_checked- Returns the number of bytes
 * @b: parameter1
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i,j = 0;
char *m;

while (s1 [i])
{
i++;
}


for (j = 0; j <= i; j++)
{
m[j] = s1[j]; 
}
for (j = 0; j <= n; j++)
{
m[i+j] = s2[j];

}


if (m == 0)
{
return (NULL) ;
}
return (m);

}
