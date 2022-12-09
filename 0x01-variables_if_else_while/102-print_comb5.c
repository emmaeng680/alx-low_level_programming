#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints combinations of two two-digit numbers,
 *        ranging from 0-99 separated by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int first, last;

for (first = 0; first <= 98; first++)
{
for (last = first + 1; last <= 99; last++)
{
putchar((first / 10) + '0');
putchar((first % 10) + '0');
putchar(' ');
putchar((last / 10) + '0');
putchar((last % 10) + '0');

if (first != 98 || last != 99)
{
putchar(',');
putchar(' ');
}


}
}

putchar(10);

return (0);
}

