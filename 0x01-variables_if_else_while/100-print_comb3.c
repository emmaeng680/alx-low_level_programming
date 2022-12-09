#include <stdio.h>
/**
 * main - Entry point
 * Description: 'double combinations of 0 to 9'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, m;

for (i = '0' ; i <= '9' ; i++)
{

for (m = i + 1 ; m <= '9' ; m++)
{
putchar(i);
putchar(m);

if (i != '8' || m != '9')
{
putchar(',');
putchar(' ');

}
}
}
putchar(10);
return (0);
}

