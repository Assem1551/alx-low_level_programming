#include <stdio.h>
#include <stdlib.h>
/**
*main - multiply two numbers 
*@argc:count parameter
*@argv:count array
*@x:sum
*Return: 0
*/

int main(int argc, char *argv[])
{
(void)argc;
int x;

if (argv[1] == NULL)
{
printf ("Error \n");
return (1);

}

x = atoi(argv[1]) * atoi(argv[2]);
printf ("%d",x);
return (0);





}
