#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print 0 to 9 with putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;

for (number = '0' ; number <= '9' ; number++)
{
putchar(number);

}
putchar(10);

return (0);
}

