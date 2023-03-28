#include "main.h"
/**
 *_strlen - swap 2 ints
 * @s: string
* Return: Returns the string length
 */

int _strlen(char *s)
{
int i = 0;
int counter = 0;


while (s[i] != '\0')
{
counter++;
}
return (counter);
}
