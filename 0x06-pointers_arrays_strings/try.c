#include <stdio.h>



int main (void)
{
char a[] ="ahmed";
char b[]= "said";

int ln_a = 0 ,ln_b = 0;
while (a[ln_a])
{
    ln_a++;
}
printf ("%d",ln_a);
while (b[ln_b])
{
    ln_b++;
}
int ln_c= ln_a + ln_b;

char c [ln_c];

for (int i =0 ; i <= ln_a;i++)
 { c [i] = a[i]; }

for (int j = 0 ; j<= ln_b ; j++ )
{
    c[ln_a + j]= b[j];
}

printf ("%s",c);
return (0);

}