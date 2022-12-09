#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all smallcase except e and q'
 * Return: Always 0 (Success)
 */
int main(void)
{
int alphabet, capitals;

for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
{
if (alphabet == 'q' || alphabet == 'e')
{
continue;
}
else
{
putchar(alphabet);
}
}
putchar(10);
return (0);
}

