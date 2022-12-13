#include <main.h>
/* betty style doc for function main goes there */
/**
 * main - Prints _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
char c[9] = "_putchar";

int i = 0;

for (i; i > 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}

