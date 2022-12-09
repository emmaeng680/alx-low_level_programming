#include <stdio.h>
/**
 * main - Entry point
 * Description: 'combinations of 0 to 9'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = '0' ; i <= '9' ; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}

}

putchar(10);


return (0);
}

